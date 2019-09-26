#include<bits/stdc++.h>
using namespace std;
int main()
{	int n,op,i,r;
	cout<<"Enter n of Zn : ";	cin>>n;
	//cout<<"Enter operator : ";	cin>>op;
	for(i=0;i<=n/2;i++)
	{	r=0; 
		do
		{	cout<<r%n<<" ";
			r+=i;
		}while(r%n!=0);
		cout<<"\n";
	}
}
