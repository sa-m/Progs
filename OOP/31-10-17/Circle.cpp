#include<iostream>
#include<math.h>
using namespace std;
class circle
{
public:
	double c,d,r,q;
	void inp()
	{
		cout<<"Enter X & Y coodinate of Center : ";
		cin>>c>>d;
		cout<<"Enter Radius of Cirle : ";
		cin>>r;
	}
	void calc(double a, double b)
	{
		q=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
		if(q==r)
			cout<<"On the circle.";
		else if(q>r)
			cout<<"Outside circle.";
		else
			cout<<"Inside circle.";
	}
};
int main()
{
	circle x;	x.inp();
	double a,b;
	cout<<"Enter X & Y coodinate of point : ";
	cin>>a>>b;
	x.calc(a,b);
	return 0;
}
