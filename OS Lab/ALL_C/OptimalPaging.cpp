//	Nearest Future Optimality Paging
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,fn,n,pf=0,ph=0;
	cout<<"Enter No. of Frames : ";	cin>>fn;	int f[fn],max;
		for(i=0;i<fn;i++)	f[i];
	cout<<"Enter No. of Pages : ";	cin>>n;	int p[n];
	cout<<"Enter the Pages : ";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
		if(i<fn)	f[i]=p[i];
	}
	if(fn==4)	pf=3;
	for(pf++,i=3;i<n;i++)
	{
		for(j=0;j<fn;j++)
			if(f[j]==p[i])
			{
				ph=1;	break;
			}
		if(ph==1)
		{	
			ph=0;
			continue;
		}
		int l[fn];
		for(k=0;k<fn;k++)	l[k]=99;
		for(j=0;j<fn;j++)
			for(k=i;k<n;k++)
				if(p[k]==f[j])
				{
					l[j]=k;
					k=n;
				}
	//	for(k=0;k<fn;k++)	cout<<l[k]<<" ";	cout<<endl;
		for(j=max=0;j<fn;j++)
			if(l[j]>max)	max=j;//	cout<<"max : "<<max<<"\n";
		f[j]=p[i];
		pf++;
	}
	cout<<pf;
	return 0;
}
