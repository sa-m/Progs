#include<iostream>
using namespace std;
class HCF
{
public:
	int gcd(int a,int b)
	{
		int s,i,h=1;
		s=(a<b)?a:b;
		for(i=1;i<=s;i++)
			if(a%i==0 && b%i==0)
				h=i;
		return h;
	}	
};
int main()
{
	int a,b;
	cout<<"Enter 2 Numbers : ";
	cin>>a>>b;
	HCF x;
	cout<<"\nHCF is : "<<x.gcd(a,b);
	return 0;
}
