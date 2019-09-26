// SRTF preemtive

#include<bits/stdc++.h>
using namespace std;
struct p{int pno; int at; int bt; int b;};
bool chkat(p a,p b){return a.at<b.at;}
bool chkpno(p a,p b){return a.pno<b.pno;}
int minbt( p a[],int n,int t)
{	int s=0,i;
	for(i=0;i<n;i++)
		if(a[i].bt<=a[s].bt && a[i].at<=t)	s=i;
	if(a[s].bt>0 )	return a[s].pno-1;
	else return 999;
}
int main()
{
	int i,j,k=-1,n,t;
	cout<<"Enter no of process : ";	cin>>n;
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
	sort(pro, pro+n, chkat);	t=pro[0].at;
	sort(pro, pro+n, chkpno);
	
	cout<<"\nP.no \tTime\n";
	while(pro[minbt(pro,n,t)].bt!=999)
	{
		j=minbt(pro,n,t);
		pro[j].bt--;
		if(k!=j)
		{
			printf("P.%d \t%d\n",pro[j].pno,t);
			k=j;
		}t++;
		if(pro[j].bt==0)
		{
			pro[j].bt=999;
			tat[j]=t;
		}
	}
	
	cout<<"\n\nP.n \tAT \tBT \tWT \tTAT\n";
	for(i=0;i<n;i++)
		printf("P.%d \t%d \t%d \t%d \t%d\n",pro[i].pno,pro[i].at,pro[i].b,(tat[i]-pro[i].b-pro[i].at),tat[i]);
	return 0;
}
