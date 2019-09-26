#include<bits/stdc++.h>
#define lld long long int
using namespace std;

struct sem
{
	int sub[5];
	int lab[4];
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
{
	lld k=1602081000;
	int x,j;
	float sum=0.0,temp;
	cout<<"Enter Current Sem : ";	cin>>x;
	for(int i=0;i<n;i++)
	{
		srand(time(0));
		cout<<"Enter Roll : ";	cin>>j;
		st[i].roll=k+j;
		cout<<"Enter name : ";	cin>>st[i].name;
		st[i].csem=x;
		for(j=0;j<x;j++)
		{
			temp=(rand()%1000)/100;
			if(temp<5.5)	temp+=4.5;
			st[i].sm[j].sgpa=temp;
			sum+=st[i].sm[j].sgpa;
		}
		st[i].cgpa=sum/x;
	}	
}
void find(float x, int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(st[i].cgpa>=x)
		{
			c++;
			if(c==1)
				cout<<"\n\nRoll\t\tName\t\tCGPA\n";
			cout<<st[i].roll<<"\t\t"<<st[i].name<<"\t\t"<<st[i].cgpa<<"\n";
		}
	}
	if(c==0)
		cout<<"\n\nNoOne found";
}
int main()
{
	int n,x;
	cout<<"Enter no of students: ";	cin>>n;
	create(n);
	cout<<"Enter Minimum SGPA : ";	cin>>x;
	find(x,n);
	return 0;
}
