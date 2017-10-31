#include<iostream>
using namespace std;
class str
{
	public:
		string s;
		void inp()
		{
			cout<<"Enter String : ";
			cin>>s;
		}
		void disp()
		{
			cout<<s;
		}
		str operator+(str x)
		{
			s = s+x.s;
			return *this;
		}
};
int main()
{
	str x,y,z;
	x.inp(); y.inp();
	z = x+y;
	cout<<z.s;
	return 0;
}
