#include<iostream>
using namespace std;
class A2;
class A1
{
	int x;
	friend void swap(A1 a,A2 b);
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
	friend void swap(A1 a,A2 b);
public:
	void get()
	{
		cout<<"Enter 2nd Number : ";
		cin>>y;
	}
};
void swap(A1 a,A2 b)
{
	a.get();
	b.get();
	cout<<"\nThe value in A : "<<a.x;
	cout<<"\nThe value in B : "<<b.y;
	cout<<"\n\n After Swapping : ";
	a.x = a.x + b.y;
	b.y = a.x - b.y;
	a.x = a.x - b.y;
	cout<<"\nThe value in A : "<<a.x;
	cout<<"\nThe value in B : "<<b.y;
}
int main()
{
	A1 a; A2 b;
	swap(a,b);
	return 0;
}

