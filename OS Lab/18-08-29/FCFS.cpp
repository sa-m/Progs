// FCFS with AT

#include<bits/stdc++.h>
using namespace std;
struct p{int pno; int at; int bt;};
bool chk(p a,p b)
{
	return a.at<b.at;
}
int main()
{
	int i,n,ts, total_wt=0 , total_tat=0;
	cout<<"Enter no of process : ";	cin>>n;
	cout<<"\nEnter AT & BT of process : \n";
	
	int wt[n] = {0},tat[n];	p pro[n];
	for(i=0;i<n;i++)
	{
		cout<<"\tProcess "<<i+1<<" : ";
		pro[i].pno = i+1;
		cin>>pro[i].at;
		cin>>pro[i].bt;
	}
	n = sizeof pro/sizeof pro[0];
	sort(pro, pro+n, chk);
	
	cout<<"\n\nOrder of Execution : ";
	for(i=0;i<n;i++)
		cout<<pro[i].pno<<", ";
				
	for(tat[0] = pro[0].at + pro[0].bt, i=1;i<n;i++)
		tat[i] = tat[i-1] + pro[i].bt;
	for(wt[0]=0, i=1;i<n;i++)
		wt[i] = tat[i-1] - pro[i].at;
		
	cout<<"\n\nP.n \tAT \tBT \tWT \tTAT\n";	
	for(i=0;i<n;i++)
		cout<<pro[i].pno<<"\t"<<pro[i].at<<"\t"<<pro[i].bt<<"\t"<<wt[i]<<"\t"<<tat[i]<<endl;
		
	return 0;
}
