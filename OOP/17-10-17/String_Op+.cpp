#include<iostream>
#include<string>
using namespace std;
class A
{
	public:
	string s;
	void inp()
	{
		cout<<"Enter String : ";
		cin>>s;
	}
	A operator+(A o1)
	{
		s=s+o1.s;
		return *this;
	}
};

int main()
{
	A s1,s2;
	s1.inp();s2.inp();
	A s3=s1+s2;
	cout<<s3.s;
	return 0;
}
