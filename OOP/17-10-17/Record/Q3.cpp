//Heirarchial Inheritance

#include<iostream>
using namespace std;
class mark
{	protected:
	int m1,m2,m3;
	public:
	void markx()
	{
		cout<<"\nEnter Marks of DSA, OOP, JAVA : ";
		cin>>m1>>m2>>m3;
	}
};
class stu: public mark
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
class res: public mark
{	protected:
	markx();
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
	stu a; res x;
	return 0;
}
