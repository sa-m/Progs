#include<bits/stdc++.h>
using namespace std;
struct pr{int p,na,nb,nc,ala,alb,alc,rqa,rqb,rqc;};
int main()
{
	int i,n,ava,avb,avc;
	cout<<"Enter Total : A,B,C : ";
		cin>>ava>>avb>>avc;
	cout<<"Enter No. of Process : ";
		cin>>n;	pr a[n];
	int seq[n]={0}, sq=0;
	for(i=0;i<n;i++)
	{
		a[i].p=i+1;
		cout<<"Pro "<<i+1<<" Needs (A,B,C): ";
			cin>>a[i].na>>a[i].nb>>a[i].nc;
		cout<<"  Allocated (A,B,C): ";
			cin>>a[i].ala>>a[i].alb>>a[i].alc;
		a[i].rqa=a[i].na-a[i].ala;
		a[i].rqb=a[i].nb-a[i].alb;
		a[i].rqc=a[i].nc-a[i].alc;
		ava -= a[i].ala;
		avb -= a[i].alb;
		avc -= a[i].alc;
	}
	for(i=0;sq<n;i++)
	{
		i%=n;
		if(seq[i]==0 && ava>=a[i].rqa && avb>=a[i].rqb && avc>=a[i].rqc)
		{
			seq[i]=++sq;
			ava += a[i].ala;
			avb += a[i].alb;
			avc += a[i].alc;
		}
	}
	cout<<"\n Execution Sequence :\n";
	for(i=0;i<n;i++)
		cout<<"Pro "<<i+1<<" : "<<seq[i]<<"\n";
	return 0;
}
