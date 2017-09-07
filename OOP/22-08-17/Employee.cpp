#include<iostream>
using namespace std;
class Employee
{
public:
	string E_name;
	int E_no;
	double Bpay,DA,NS;
	void readData()
	{
		cout<<"Enter Employee Name : ";
		cin>>E_name;
		cout<<"Enter Employee No. : ";
		cin>>E_no;
		cout<<"Enter Basic Pay : ";
		cin>>Bpay;
	}
	void calc()
	{
		double IT;
		DA = 1.52*Bpay;
		IT = 0.3*(Bpay+DA);
		NS = Bpay + DA - IT;
	}
	void disp()
	{
		cout<<endl;
		cout<<"Employee Name : "<<E_name<<endl;;
		cout<<"Employee No. : "<<E_no<<endl;
		cout<<"Basic Pay : "<<Bpay<<endl;
		cout<<"Domestic Allowance : "<<DA<<endl;
		cout<<"Net Salary : "<<NS<<endl;
	}
};
int main()
{
	int n,i;
	cout<<"Enter no. of Employees : ";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		Employee o;
		o.readData();
		o.calc();
		o.disp();
	}
	return 0;
}
