#include<iostream>
using namespace std;
class ATM
{
	//Default ATM Balance is taken as 15k
	float b=15000.0,w;
	public:
	void deb()
	{
		cout<<"Enter amount to withdraw : Rs.";
		cin>>w;
		if(w<=b)
		{
			b-=w;
			cout<<"Balance : Rs."<<b<<endl;
		}
		else
		cout<<"insuficient balance\n";
		
	}
	void bal()
	{
		cout<<"Balance : Rs."<<b<<endl;
	}
};
int main()
{
	ATM p;
	cout<<"ENTER \n 1 to check balance\n 2 to withdraw\n";
	int t;
	cin>>t;
	switch(t)
	{
		case 1:
			p.bal();	break;
		case 2:
			p.deb();	break;
		default:
			cout<<"Invalid Choice";
	}
	return 0;
}
