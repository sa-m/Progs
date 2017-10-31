#include<iostream>
using namespace std;
class A
{
	public:
		void f1()
		{
			cout<<"In class A\n";
		}
};
class B : virtual public A
{
	public:
		void f2()
		{
			cout<<"In class B\n";
		}
};
class C :virtual public A
{
	public:
		void f3()
		{
			cout<<"In class C\n";
		}
};
class D :public B,public C
{
	public:
		void f4()
		{
			cout<<"In class D\n";
		}
};
int main()
{
	D obj;
	obj.f1();
	obj.f2();
	obj.f3();
	obj.f4();
	return 0;
}

