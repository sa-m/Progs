/**
-> WAP to declare a class with 2 Data members & a 'display' member function-
-> Create an object and display the contents of the object using the Member Function
-> Initialize the same object using explicit call to constructor & then again display the contents
*/
#include<iostream>
using namespace std;
class A
{
public:
	int x,y;
	A()
	{
		x=10;y=20;
	}
	A(int a, int b)
	{
		x=a;y=b;
	}
	void disp()
	{
		cout<<"\nA = "<<x<<endl;
		cout<<"B = "<<y<<endl;
	}
	~A()
	{	cout<<"\nDESTRUCTOR\n";
		cout<<"A = "<<x<<endl;
		cout<<"B = "<<y<<endl;
	}
};
int main()
{	
	A obj;
	obj.disp();
	
	//Second Part
	obj = A(50,100);
	obj.disp();
	return 0;
}
