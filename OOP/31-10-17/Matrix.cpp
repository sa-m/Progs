#include<iostream>
#include<math.h>
using namespace std;
int i,j;
class Matrix
{public:
	int r,c;
	int x[5][5];
	void inp()
	{
		cout<<"Enter Size of matrix : ";
		cin>>r>>c;
		cout<<"Enter the matrix :\n";
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				cin>>x[i][j];
		
	}	
};
class Opx : public Matrix
{public:
	Matrix a,b;
	Opx()
	{
		cout<<"1st Matrix :\n";a.inp();
		cout<<"\n2nd Matrix :\n";b.inp();
	}
	void sum()
	{	cout<<"Sum ";
		if(a.r!=b.r || a.c!=b.c)
			cout<<" Not Possible";
		else
		{
			for(i=0;i<a.r;i++)
			{	cout<<endl;
				for(j=0;j<a.c;j++)
					cout<<(a.x[i][j]+b.x[i][j])<<" ";
			}		
		}
	}
	void sub()
	{	cout<<"Sum ";
		if(a.r!=b.r || a.c!=b.c)
			cout<<" Not Possible";
		else
		{
			for(i=0;i<a.r;i++)
			{	cout<<endl;
				for(j=0;j<a.c;j++)
					cout<<(a.x[i][j]+b.x[i][j])<<" ";
			}		
		}
	}
	void mul()
	{	cout<<"Multilication ";
		if(a.c!=b.r)
			cout<<"Not Possible";
		else
		{	Matrix q;
			for(int i = 0;i<a;i++)
			{	cout<<endl;
				for(int j = 0;j<b;j++)
				{
					for(int k = 0;k<a;k++)
						q.x[i][j] += a.x[i][k]*b.x[k][j];
					cout<<q.x[i][j]<<" ";
				}
			}
		}
	}
	
};
int main()
{
	Opx x;
	cout<<"\n\n1-Addition\t2-Substraction\t3-Multiplication"
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			x.sum();	break;
		case 2:
			x.sub();	break;
		case 3:
			x.mul();	break;
		default:
			cout<<"Invalid Choice";
	}
	return 0;
}
