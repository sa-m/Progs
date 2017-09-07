#include<iostream>
using namespace std;
class pal
{
public:
	void palin(int n)
	{
		int b,d,p=0;
		for(b=n;b!=0;b/=10)
		{
			d=b%10;
			p=p*10+d;
		}
		if(p==n)
			cout<<"Palindrome";
		else
			cout<<"Not Palindrome";
	}
};
int main()
{
	int n;
	cout<<"Enter a Number : ";
	cin>>n;
	pal p;
	p.palin(n);
	return 0;
}

