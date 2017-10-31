#include<iostream>
using namespace std;
class A
{	public:
	void da()
	{
		cout<<"\nIn Class A";
	}
};
class B:virtual public A
{	public:
	void db()
	{
		cout<<"\nIn Class B";
	}
};
class C:virtual public A
{	public:
	void dc()
	{
		cout<<"\nIn Class C";
	}
};
class D:public B, public C
{	public:
	void dd()
	{
		cout<<"\nIn Class D";
	}
};
int main()
{
	D x;
	x.da();
	x.db();
	x.dc();
	x.dd();
	return 0;
}
