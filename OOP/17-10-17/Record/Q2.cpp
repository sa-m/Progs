//Multiple Inheritance

#include<iostream>
using namespace std;
class stu
{	protected:
	string nm;
	int roll;
	public:
	stu()
	{
		cout<<"\nEnter Name : ";
		cin>>nm;
		cout<<"Enter Roll no : ";
		cin>>roll;
	}
};
class mark
{	protected:
	int m1,m2,m3;
	public:
	mark()
	{
		cout<<"\nEnter Marks of DSA, OOP, JAVA : ";
		cin>>m1>>m2>>m3;
	}
};
class res: public stu,mark
{	protected:
	int sum = m1+m2+m3;
	float avg = sum/3;
	public:
	res()
	{
		cout<<"\nTotal Marks : "<<sum;
		cout<<"\nAverage Marks : "<<avg;
	}
};
int main()
{
	res x;
	return 0;
}
