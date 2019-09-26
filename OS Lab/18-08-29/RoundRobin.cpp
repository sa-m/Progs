// Round Robin Scheduling

#include<bits/stdc++.h>
using namespace std;
struct p{int pno; int at; int bt; int b;};
bool chk(p a,p b){return a.at<b.at;}
bool check(p pro[],int n)
{
	for(int i=0;i<n;i++)
		if(pro[i].bt > 0)	return true;
	return false;
}
int main()
{
	int i,n,ts,t;
	cout<<"Enter no of process : ";	cin>>n;
	cout<<"Enter time slice : ";	cin>>ts;
	cout<<"\nEnter AT & BT of process : \n";
		
	int tat[n];	p pro[n];
	for(i=0;i<n;i++)
	{
		cout<<"\tProcess "<<i+1<<" : ";
		pro[i].pno = i+1;
		cin>>pro[i].at;
		cin>>pro[i].bt;
		pro[i].b = pro[i].bt;
	}
	sort(pro, pro+n, chk);	t=pro[0].at;
	
	cout<<"\nP.no \tTime\n";
	while(check(pro,n))
		for(i=0;i<n;i++)
			if(pro[i].bt!=0 && t>=pro[i].at)
				if(pro[i].bt>ts)
				{
					t+=ts;
					pro[i].bt-=ts;
					printf("P.%d \t(%d-%d)\n",pro[i].pno,t-ts,t);
				}
				else
				{
					t+=pro[i].bt;
					printf("P.%d \t(%d-%d)\n",pro[i].pno,t-pro[i].bt,t);				
					tat[i] = t;
					pro[i].bt=0;
				}
	
	cout<<"\n\nP.n \tAT \tBT \tWT \tTAT\n";
	for(i=0;i<n;i++)
		printf("P.%d \t%d \t%d \t%d \t%d\n",pro[i].pno,pro[i].at,pro[i].b,(tat[i]-pro[i].b-pro[i].at),tat[i]);
	return 0;
}
