#include<iostream>
#include<string>
using namespace std;
class A
{
	public:
	int s;
	void inp()
	{
		cout<<"Enter Number : ";
		cin>>s;
	}
	A operator++()
	{
		s++;
		return *this;
	}
};

int main()
{
	A s1;
	s1.inp();
	++s1;
	cout<<s1.s;
	return 0;
}
