#include<iostream>
using namespace std;
class fib
{
	public:
	void fibo(int n)
	{
		int a=0,b=1,c=a+b,i;
		cout<<a<<" "<<b<<" ";
		for(i=0;i<n-2;c=a+b,i++)
		{
			cout<<c<<" ";
			a=b;b=c;
		}
	}
};
int main()
{
	int n;
	cout<<"Enter value of N : ";
	cin>>n;
	fib f;
	f.fibo(n);
	return 0;
}
