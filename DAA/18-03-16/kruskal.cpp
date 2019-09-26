#include<iostream>
using namespace std;
int main()
{	int e,i,j,m,f,g;
	cout<<"Enter no. of Edges : ";	cin>>e;	int w[e];	string ed[e];
	cout<<"\nEnter the Edges and Weights :\n";
	for(i=0;i<e;i++)
	{
		cout<<"Edge : ";	cin>>ed[i];
		cout<<"Wght : ";	cin>>w[i];
	}
	for(i=0;i<e;i++)
	{	for(m=i,j=i+1;j<=e;j++)
			if(w[j]<w[m])	m=j;
		int x=w[i];	w[i]=w[m];	w[m]=x;
		char y=ed[i][0];	ed[i][0]=ed[m][0];	ed[m][0]=y;	y=ed[i][1];	ed[i][1]=ed[m][1];	ed[m][1]=y;
	}
	int twt=w[0];	cout<<"\n\nEdges involved : "<<ed[0];
	for(i=1;i<e;i++)
	{	for(f=g=0,j=0;j<i;j++)
			if(ed[i][0]==ed[j][0] || ed[i][0]==ed[j][1])	f=1;
			if(ed[i][1]==ed[j][0] || ed[i][1]==ed[j][1])	g=1;
		if(f==0 && g==0)
		{
			cout<<", "<<ed[i];
			twt+=w[i];
		}
	}
	return 0;
}
