// LJF Non - preemtive

#include<bits/stdc++.h>
using namespace std;
struct p{int pno; int at; int bt; int b; int tat;};
bool chkat(p a,p b){return a.at<b.at;}
bool chkpbt(p a,p b){return a.bt>b.bt;}
bool chkpno(p a,p b){return a.pno<b.pno;}
int main()
{
	int i,n,t;
	cout<<"Enter no of process : ";
		cin>>n;
	cout<<"\nEnter AT & BT of process : \n";
	
	p pro[n];
	for(i=0;i<n;i++)
	{
		cout<<"\tProcess "<<i+1<<" : ";
			cin>>pro[i].at;	
			cin>>pro[i].bt;
		pro[i].pno = i+1;
		pro[i].b = pro[i].bt;
	}
	sort(pro, pro+n, chkat);
		t=pro[0].at;
	sort(pro, pro+n, chkpbt);
	
	cout<<"\nP.no \tTime\n";
	for(i=0;pro[0].bt!=-1;sort(pro, pro+n, chkpbt))
		if(pro[i].at<=t && pro[i].bt!=-1)
		{
			printf("P.%d \t%d\n",pro[i].pno,t);
			t+=pro[i].bt;
			pro[i].bt=-1;
			pro[i].tat=t;
			i=0;
		}
		else	i++;
		
	sort(pro, pro+n, chkpno);
	cout<<"\n\nP.n \tAT \tBT \tWT \tTAT\n";
	for(i=0;i<n;i++)
		printf("P.%d \t%d \t%d \t%d \t%d\n",pro[i].pno,pro[i].at,pro[i].b,(pro[i].tat-pro[i].b-pro[i].at),pro[i].tat);
	return 0;
}
