#include<iostream>
using namespace std;
class A2;
class A1
{
	int x;
	friend void swap(A1 &a,A2 &b);
	friend void disp(A1 &a,A2 &b);
public:
	void get()
	{
		cout<<"Enter 1st Number : ";
		cin>>x;
	}
};
class A2
{
	int y;
	friend void swap(A1 &a,A2 &b);
	friend void disp(A1 &a,A2 &b);
public:
	void get()
	{
		cout<<"Enter 2nd Number : ";
		cin>>y;
	}
};
void swap(A1 &a,A2 &b)
{

	a.x = a.x + b.y;
	b.y = a.x - b.y;
	a.x = a.x - b.y;
}
void disp(A1 &a,A2 &b)
{
	cout<<"\nThe value in A : "<<a.x;
	cout<<"\nThe value in B : "<<b.y;
}
int main()
{
	A1 a; A2 b;
	a.get();
	b.get();
	cout<<"\n\n After Swapping : ";
	swap(a,b);disp(a,b);
	return 0;
}

