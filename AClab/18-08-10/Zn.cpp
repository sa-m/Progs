#include<bits/stdc++.h>
using namespace std;

int mp(int x, int n)
{
	if(x<0)
		return n-(abs(x)%n);
	else
		return x%n;
}

bool check(int a, int b)
{	
	if(a>=b || a<0)
		return false;
	int x=1;
	for(int i=1;i<((a<b)?a:b);i++)
		if(a%i==0 && b%i==0)
			x=i;
	if(x==1)
		return true;
	else
		return false;
}

void mli(int n,int a)
{
	if(check(a,n))
	{	
		int  r1=n,r2=a,t1=0,t2=1,q,r,t;
			q=r1/r2;
			r=r1%r2;
		while(r2>0)
		{
			q=r1/r2;
			r=r1%r2;	r1=r2;	r2=r;
			t=t1-q*t2;	t1=t2;	t2=t;	
		}
		if(r1==1)
			cout<<"Multiplicative Inverse : "<<mp(t1,n);
	}
	else
		cout<<"Inverse Doesn't Exist. ";
}

int main()
{	int n,ch,a,b;
	cout<<"Enter value of n : ";
		cin>>n;
	cout<<"Enter choice : \n\t1.Addition \n\t2.Substraction \n\t3.Multiplication \n\t4.Additive Inverse \n\t5.Multiplicative Inverse\n\n";
	cin>>ch;
	if(ch<4)
	{
		cout<<"Enter 2 numbers : ";
		cin>>a>>b;
	}
	else if(ch<6)
	{
		cout<<"Enter a number : ";
		cin>>a;
	}
	switch(ch)
	{
		case 1: cout<<"Summation in Zn : "<<mp((a+b)%n,n);
				break;
		case 2: cout<<"Difference in Zn : "<<mp((a-b)%n,n);
				break;
		case 3: cout<<"Product in Zn : "<<mp((a*b)%n,n);
				break;
		case 4: cout<<"Additive Inverse : ";
				if(a==0)	cout<<n;
				else 		cout<<n-a;
				break;
		case 5: mli(n,a);
				break;
		default: cout<<"Invalid Input.";
	}
	return 0;
}
