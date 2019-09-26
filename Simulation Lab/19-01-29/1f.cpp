#include<bits/stdc++.h>
#define lld long long int
using namespace std;

ifstream in("inp.txt");

struct sem
{
	int sub[9];
	float sgpa;
};
struct stu
{
	lld	roll;
	string name;
	int csem;
	sem sm[8];
	float cgpa;
};
stu st[30];
void create(int n)
{	srand(time(0));
	lld k=1602081000;
	int x,j,l;
	float sum=0.0,temp;
	cout<<"Enter Current Sem : ";	in>>x;
	for(int i=0;i<n;i++)
	{
		
		cout<<"Enter Roll : ";	in>>j;
		st[i].roll=k+j;
		cout<<"Enter name : ";	in>>st[i].name;
		st[i].csem=x;
		for(j=0;j<x;j++)
		{
//			temp=float((rand()+time(0))%1000)/100;
//			if(temp<2.5)	temp+=float((rand()+time(0))%1000)/200;
//			TradeMarked to S@M
//			st[i].sm[j].sgpa=temp;
			for(l=0,temp=0.0;l<9;l++)
			{
				st[i].sm[j].sub[l]=((rand()+time(0))%100);
				if(st[i].sm[j].sub[l]<21)	st[i].sm[j].sub[l]+=((rand()+time(0))%100);
				if(st[i].sm[j].sub[l]>89)	st[i].sm[j].sub[l]-=((rand()+time(0))%100);
				temp+=(ceil)(st[i].sm[j].sub[l]/10);
			}
			st[i].sm[j].sgpa=temp/7;
			sum+=st[i].sm[j].sgpa;
		}
		st[i].cgpa=sum/x;
		sum=0.0;
	}	
}
void find(float x, int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(st[i].cgpa>=x+0.5)
		{
			c++;
			if(c==1)
				cout<<"\n\nRoll\t\t\tName\t\t\tCGPA\n";
			cout<<st[i].roll<<"\t\t"<<st[i].name<<"\t\t\t";
			printf("%3.2f\n",st[i].cgpa);
		}
	}
	if(c==0)
		cout<<"\n\nNoOne found";
}
int main()
{
	int n,x;
	cout<<"Enter no of students: ";	in>>n;
	create(n);
	cout<<"\n\nFile Input Completed :)";
	cout<<"\n\nEnter Minimum SGPA : ";	cin>>x;
	find(x,n);
//	srand(time(0));
//	for(int i=0;i<10;i++)
//		cout<<float((rand()+time(0))%1000)/100<<endl;
	return 0;
}
