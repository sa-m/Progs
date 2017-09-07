#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=10;y=20;
		cout<<"\nConstructor Called : x="<<x<<" y="<<y;
	}
	A(int a, int b)
	{
		x=a;y=b;
		cout<<"\nConstructor Called : x="<<a<<" y="<<b;
	}
	~A()
	{
		cout<<"\n\nDestructor Called : x="<<x<<" y="<<y;
	}
};
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
