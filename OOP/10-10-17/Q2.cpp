#include<iostream>
using namespace std;
class library
{
public:
	string bn,ba;
	int isbn;
	void addb()
	{
		cout<<"\nEnter Book Name & Author : ";
		cin>>bn>>ba;
		cout<<"Enter ISBN : ";
		cin>>isbn;
	}
};
class teacher: public library
{
	public:
		string tn;
		int eid;
		library A[5];
		teacher()
		{
			cout<<"Enter Teacher Name : ";
			cin>>tn;
			cout<<"Enter Employee ID : ";
			cin>>eid;
		}
		void issue(int i)
		{
			A[i].addb();
		}
		void show(int i)
		{
			cout<<"Max Issue Possible : 5\n";
			cout<<"Current Issued : "<<(i+1);
			cout<<"\n\nBook\tAuthor\tISBN\n";
			cout<<"----\t------\t-----\n";
			for(int j=0;j<=i;j++)
				cout<<A[j].bn<<"\t"<<A[j].ba<<"\t"<<A[j].isbn<<endl;
			cout<<"\n\n";
		}
};
class student: public library
{
	public:
		string sn;
		int reg;
		library B[5];
		student()
		{
			cout<<"\nEnter Student Name : ";
			cin>>sn;
			cout<<"Enter Reg. No. : ";
			cin>>reg;
		}
		void issue(int i)
		{
			B[i].addb();
		}
		void show(int i)
		{
			cout<<"Max Issue Possible : 5\n";
			cout<<"Current Issued : "<<(i+1);
			cout<<"\n\nBook\tAuthor\tISBN\n";
			cout<<"----\t------\t-----\n";
			for(int j=0;j<=i;j++)
				cout<<B[j].bn<<"\t"<<B[j].ba<<"\t"<<B[j].isbn<<endl;
			cout<<"\n\n";
		}
};
int main()
{
	int c=0,i=0,j=0,x;
	teacher T;
	student S;
	cout<<"-----Library-----\n";
	while(c==0)
	{
		cout<<"\n0 - Exit\n\n1 - Teachers\n2 - Students\n\n3 - Show Max\n\n";
		cin>>x;
		switch(x)
		{
			case 1:
				T.issue(i);i++;
				continue;
			case 2:
				S.issue(j);j++;
				continue;
			case 0:
				return 0;
			case 3:
				if(i==j)
				{
					if(i==0)
						cout<<"\nNo Books Issued.\n";
					else
						cout<<"\nEqual Books issued.\n";
					continue;
				}
				if(j>i)
				{
					cout<<"\nMax Book issued by Student.";
					cout<<"\nStudent Name : "<<S.sn;
					cout<<"\nStudent ID : "<<S.reg<<endl;
					S.show(j);
				}
				else
				{
					cout<<"\nMax Book issued by Teacher.";
					cout<<"\nTeacher Name : "<<T.tn;
					cout<<"\nTeacher ID : "<<T.eid<<endl;
					T.show(i);
				}
				continue;
			default:
				cout<<"Invalid Choice\n";
				continue;					
		}
		
	}
}
