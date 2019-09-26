#include<bits/stdc++.h>
using namespace std;
fstream in("inp.txt");
struct p{int pno; int at; int bt; int b; int pt;};
bool chk(p a,p b){return a.at<b.at;}
bool check(p pro[],int n)
{
	for(int i=0;i<n;i++)
		if(pro[i].bt > 0)	return true;
	return false;
}
int main()
{
	int i,n,ts,t,it,sw=0,st=0;
	cout<<"Enter no of process : ";	
		cin>>n;
	cout<<"\nEnter AT, BT & Priority_Index of process : \n";
		
	int tat[n],wt[n];	p pro[n];
	for(i=0;i<n;i++)
	{
		cout<<"\tProcess "<<i+1<<" : ";
		pro[i].pno = i+1;
		cin>>pro[i].at;
		cin>>pro[i].bt;
		pro[i].b = pro[i].bt;
		cin>>pro[i].pt;
	}
	sort(pro, pro+n, chk);	it=t=pro[0].at;
	
	cout<<"\nP.no \tTime\n";
	while(check(pro,n))
		for(i=0;i<n;i++)
		{
			ts = 5 - pro[i].pt;
			if(pro[i].bt!=0 && t>=pro[i].at)
				if(pro[i].bt>ts)
				{
					t+=ts;
					pro[i].bt-=ts;
					//printf("P.%d \t(%d-%d)\n",pro[i].pno,t-ts,t);
				}
				else
				{
					t+=pro[i].bt;
					//printf("P.%d \t(%d-%d)\n",pro[i].pno,t-pro[i].bt,t);				
					tat[i] = t;
					pro[i].bt=0;
				}
		}
	
	cout<<"\n\nP.n \tAT \tBT \tWT \tTAT\n";
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-pro[i].b-pro[i].at;
		printf("P.%d \t%d \t%d \t%d \t%d\n",pro[i].pno,pro[i].at,pro[i].b,wt[i],(tat[i]-pro[i].at));
		if(i>0)	if(pro[i].at > tat[i-1])	it+=(pro[i].at-tat[i-1]);
		sw+=wt[i];
		st+=tat[i];
	}
	cout<<"Avg Wait Time : "<<(float)sw/n<<endl;
	cout<<"Avg TAT : "<<(float)st/n<<endl;
	cout<<"Avg Idle Time : "<<(float)it/n<<endl;
	cout<<"Throughput : "<<n/(float)st<<endl;
	return 0;
}
