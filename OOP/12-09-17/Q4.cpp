/**
-> The postage of ordinary post is Rs.2 /15gm  & Re.1 for each adaitional 10gm
-> WAP to read weights of n postage & Display the total amount of cost
*/
#include<iostream>
using namespace std;
class post
{
	int c,n,cost=0;
public:
	void calc(int z)
	{
		n=z;
		if(n<15)
			cost += 2;
		else
		{	c=2;
			n-=15;
			while(n>0)
			{
				n-=10;
				c++;
			}
			cost += c;
		}
	}
	void disp()
	{
		cout<<"\nTotal postage cost : Rs."<<cost;
	}
};
int main()
{	int x,temp;
	cout<<"Enter no. of packets : ";
	cin >> x;
	post a;
	cout<<"Enter weight of "<<x<<" packets : ";
	while(x--)
	{
		cin>>temp;
		a.calc(temp);
	}
	a.disp();
	return 0;
}
