#include<bits/stdc++.h>
using namespace std;
int main()
{	int n,i,j,r,k,x,arr[100][100],count[100];
	cout<<"Enter n of Zn : ";	cin>>n;
	for(i=0;i<=n/2;i++)
	{	r=0;
		j=0;
		do
		{
			arr[i][j]=r%n;
			j++;
			r+=i;
		}while(r%n!=0);
		arr[i][j]=99;
		count[i]=j;
	}
	for(i=0;i<=n/2;i++)
	{
		for(k=0;k<i;k++)
			if(count[i]==count[k])
				x=1;
	
			j=0;	
			while(arr[i][j]!=99 && x!=1)
				cout<<arr[i][j++]<<"  ";
				
			cout<<"\n";			
	}

}
