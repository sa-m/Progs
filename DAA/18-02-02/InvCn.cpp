#include<iostream>
using namespace std;

int c=0;

void mrg(int arr[],int l, int m,int h)
{
	int i,j,k,x=m,y=h-l+1-m;
	int L[x],R[y];
	for(i=0;i<x;i++)
		L[i]=arr[i];
	for(j=0;j<y;j++)
		R[j]=arr[m+j];
	
	i=j=0;k=0;
	while(i<x && j<y)
	{	if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
			c++;
			cout<<" z"<<x<<"y"<<i;
		}
		k++;
	}
	while(i<x)
	{
		arr[k]=L[i];
		k++;i++;
	}
	while(j<y)
	{
		arr[k]=R[j];
		k++;j++;
	}
}

void ms(int arr[],int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		ms(arr,l,m);
		ms(arr,m+1,h);
		mrg(arr,l,m,h);
	}	
}

int main()
{	int n,i,arr[100];
	cout<<"Enter size of Array : ";
	cin>>n;
	cout<<"Enter the Array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	ms(arr,0,n-1);
	cout<<"No of Inversion Counts : "<<c;
	return 0;
}
