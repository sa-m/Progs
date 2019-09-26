// FCFS with AT
#include<bits/stdc++.h>
using namespace std;
struct p{int pno; int at; int bt;};
bool chk(p a,p b){return a.at<b.at;}
int main()
{
	int i,id=0,n,ts,twt=0,wtt=0;
	cout<<"Enter no of process : ";	cin>>n;
	cout<<"\nEnter AT & BT of process : \n";	
	int wt[n] = {0},tat[n],ct[n];	p pro[n];
	for(i=0;i<n;i++)
	{
		cout<<"\tProcess "<<i+1<<" : ";
		pro[i].pno = i+1;
		cin>>pro[i].at>>pro[i].bt>>ts;
	}
	n = sizeof pro/sizeof pro[0];
	sort(pro, pro+n, chk);
	for(ct[0] = pro[0].bt + pro[0].at, i=1;i<n;i++){
		if((ct[i-1]+id)<pro[i].at)	id++;
		ct[i] = ct[i-1] + pro[i].bt;}			
	for(i=0;i<n;i++)
		tat[i] = ct[i] - pro[i].at;
	for(i=0;i<n;i++)
		wt[i] = tat[i] - pro[i].bt;
		
	//cout<<"\n\nP.n \tAT \tBT \tWT \tTAT\n";	
	for(i=0;i<n;i++){
		//cout<<pro[i].pno<<"\t"<<pro[i].at<<"\t"<<pro[i].bt<<"\t"<<wt[i]<<"\t"<<tat[i]<<endl;
		twt+= tat[i];
		wtt+= wt[i];
	}
	printf("\nAverage turn around time = %f",twt*1.0/n);
	printf("\nAverage waiting time = %f",wtt*1.0/n);
	printf("\nAverage Idle time = %f",id*1.0/n);
	return 0;
}
