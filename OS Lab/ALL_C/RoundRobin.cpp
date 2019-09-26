// Round Robin Scheduling
#include<bits/stdc++.h>
using namespace std;
struct p{int pno; int at; int bt; int b; int pr;};
bool chk(p a,p b){return a.at<b.at;}
bool chkpr(p a,p b){return a.pr<b.pr;}
bool check(p pro[],int n)
{
	for(int i=0;i<n;i++)
		if(pro[i].bt > 0)	return true;
	return false;
}
int main()
{
	int i,n,k=0,ts,t,twt=0,wt=0;
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
	sort(pro, pro+n, chk);	t=pro[0].at;	pro[0].pr=++k;
	cout<<"\nP.no \tTime\n";
	while(check(pro,n))
		for(i=0;i<n;i++)
			if(pro[i].bt!=0 && t>=pro[i].at)
			{	
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
			}
	cout<<"\n\nP.no \tAT \tBT \tWT \tTAT\n";
	for(i=0;i<n;i++){
		printf("P.%d \t%d \t%d \t%d \t%d\n",pro[i].pno,pro[i].at,pro[i].b,(tat[i]-pro[i].b-pro[i].at),tat[i]);
		twt+= tat[i];
		wt+= (tat[i]-pro[i].b-pro[i].at);
	}
	printf("\nAverage turn around time = %f",twt*1.0/n);
	printf("\nAverage waiting time = %f",wt*1.0/n);
	return 0;

}
