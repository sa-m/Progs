#include<iostream>
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
		void disp()
		{
			cout<<s;
		}
		A operator++(int)
		{
			s = s+1;
			return *this;
		}
		A operator++()
		{
			s = s+1;
			return *this;
		}
};
int main()
{
	A x,z;
	x.inp();
	z = x++;
	cout<<z.s;
	return 0;
}
