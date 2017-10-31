#include<iostream>
using namespace std;

class marks 
{
	public:
	int m[5];
	void inp1()
	{
		cout<<"Enter marks of 5 subjects : \n";
		for(int i=0;i<5;i++)
		{
			cout<<"Subject "<<(i+1)<<" : ";
			cin>>m[i];
		}
	}
	
};
class student : public marks 
{
	private:
	string name;
	string cname;
	long rno;
	public:
	void inp()
	{
		cout<<"Enter student name :";
		cin>>name;
		cout<<"Enter college name :";
		cin>>cname;
		cout<<"Enter roll no : ";
		cin>>rno;
	}
	void disp()
	{
		cout<<"\nstudent name :"<<name;
		cout<<"\ncollege name :"<<cname;
		cout<<"\nroll no : "<<rno;
	}
	
};
class results : public marks 
{
	public:
	float sum,avg;
	void calc()
	{
		sum=0;
		int i;
		for(i=0;i<5;i++)
		sum+=m[i];
		avg=sum/5;
	}
	void disp1()
	{
		cout<<"\nSum : "<<sum;
		cout<<"\nAverage : "<<avg;
	}
};
int main()
{
	student o1;
	results o;
	o1.inp();
	o.inp1();
	o.calc();
	o1.disp();
	o.disp1();
	return 0;
}
