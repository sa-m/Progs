#include<iostream>
using namespace std;
inline int comp(int a, int b)
{
	return (a>b)?a:b;
}
int main()
{
	int a[3]; int i,h;
	cout<<"Enter 3 Nos. : ";
	cin>>a>>b>>c
	if(a==b && a==c)
		cout<<"All Numbers are Equal";
	else
	{
		h=comp(a,b);
		h=comp(h,c);
		cout<<"The Greatest no is : "<<h;
	}
}
