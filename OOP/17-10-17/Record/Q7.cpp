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
		A operator+(A x)
		{
			s = s+x.s;
			return *this;
		}
		A operator*(int x)
		{
			s = s*x;
			return *this;
		}
};
int main()
{
	A x,y,z;
	x.inp();y.inp();
	z = x+y*3;
	cout<<z.s;
	return 0;
}
