#include<iostream>
using namespace std;
class A
{
	public :
	A(int x)
	{
		cout<<"Constructor Called : A="<<x<<endl;
	}
	~A()
	{
		cout<<"Destructor Called"<<endl;
	}
};
int main()
{
	A a = A(10);		//Explicit Constructor
	A::~A;			//Explicit Destructor
	return 0;
}
