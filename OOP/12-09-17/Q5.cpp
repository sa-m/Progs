//WAP to illustrate the difference between Copy constructor & Assignment Operator

#include<iostream>
using namespace std;
class room
{
	int a,b;
public:
	room()
	{	cout<<"\n\nDefault : "<<endl;
		a=10;
		b=20;
		cout<<"A = "<<a<<"\tB = "<<b;
	}
	room(room &x)
	{	cout<<"\n\nCopy : "<<endl;
		a=x.a;
		b=x.b;
		cout<<"A = "<<a<<"\tB = "<<b;
	}
};
int main()
{	
	room a;		//Default Constructor Called
	
	room b(a);	//Copy constructor Called
	
	//room c=a;
	
	room c;		//Default constructor called
		c=a;	//No constructor is called

	return 0;
}
/**
Conclusion :
	NO constructor is called during "assignment" operator
	Where as the copy constructor invokes one ..
	*/

