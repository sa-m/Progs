#include<iostream>
using namespace std;
class A
{
	public :
	A()
	{
		cout<<"Constructor Called"<<endl;
	}
	~A()
	{
		cout<<"Destructor Called"<<endl;
	}
};
int main()
{
	A a;
	return 0;
}
