#include<iostream>
using namespace std;
class A
{
	private:
		int a=10;
	protected:
		int b=20;
	public:
		int c=30;		
};
class B: private A
{
	private:
		int x=100;
	protected:
		int y=200;
	public:
		int z=300;
		void disp()
		{
			cout<<"\nIn Functon B:\n";
			//cout<<"a of A : "<<a<<endl;
			cout<<"b of A : "<<b<<endl;
			cout<<"c of A : "<<c<<endl;
			cout<<"x of B : "<<x<<endl;
			cout<<"y of B : "<<y<<endl;
			cout<<"z of B : "<<z<<endl;
		}		
};
int main()
{
	B obj;
	obj.disp();
	cout<<"\nIn Main:\n";
	//cout<<"a of A : "<<obj.a<<endl;
	//cout<<"b of A : "<<obj.b<<endl;//private
	//cout<<"c of A : "<<obj.c<<endl;
	//cout<<"x of B : "<<obj.x<<endl;
	//cout<<"y of B : "<<obj.y<<endl;
	cout<<"z of B : "<<obj.z<<endl;
}
