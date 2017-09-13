// WAP to display the use of static Data Members

#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	static int c;
	A()
	{
		x=10;y=20;c++;
		cout<<"\nx="<<x<<" y="<<y;
	}
	A(int a, int b)
	{
		x=a;y=b;c++;
		cout<<"\nx="<<a<<" y="<<b;
	}
	~A()
	{
		c--;
		cout<<"\n\nx="<<x<<" y="<<y<<" C ="<<c;
	}
}; int A::c;
int main()
{
	A a;
	A b(20,30);
	{
		A c(50,100);
	}
	{
		A d(5,10);
		A e;
	}
}
