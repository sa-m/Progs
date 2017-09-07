#include<iostream>
using namespace std;
class A2;
class A1
{
	int x;
	public :
	friend int comp(A1 a,A2 b);
	void get()
	{
		cout<<"Enter 1st Number : ";
		cin>>x;
	}
};
class A2
{
	int y;
	public :
	friend int comp(A1 a,A2 b);
	void get()
	{
		cout<<"Enter 2nd Number : ";
		cin>>y;
	}
};
int comp(A1 a,A2 b)
{
	if(a.x!=b.y)
	cout<<"The greatest no. is : "<<(a.x>b.y)?a.x:b.y;
	else
	cout<<"Both Values are Equal ie A=B="<<a.x;
}
int main()
{
	A1 a; A2 b;
	a.get();
	b.get();
	comp(a,b);
	return 0;
}

