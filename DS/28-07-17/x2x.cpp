#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
char a[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void d2bs_print(int n,int b)
{
	if(n/b!=0)
        d2b(n/b,b);
	cout<<a[n%b];
}
void check(string s,int b)
{
	for(int i=0;i<s.size();i++)
		if(n[i]>=a[b])
        {
            cout<<"Invalid No. for given base.";
            exit(0);
        }
}
int bs2d(string s,int b)
{
	int n=0,i,d,c=0;
	for(i=s.size();i>=0;i--,c++)
	{
		if(s[i]>=48 && s[i]<=57)
            d = s[i] - 48;
		else if (s[i]>=65 && s[i]<=70)
			d = s[i] - 55;
        n=n+d*pow(b,c);
    }
	return n;
}
int main()
{
	int n,b1,b2,nd,x=1;
	cout<<"\n\n\n***It works with numbers with base 2 to 16 and +ve numbers with no decimals***\n\n";
	while(x)
	{

	string s;

	cout<<"enter the base of the number you will enter to convert\n";
	cin>>b1;
	if(!(b1>=2 && b1<=16) && b1==abs(b1))
	print();
	cout<<"enter a number to convert\n";
	cin>>s;
	ch(s,b1);
	cout<<"enter the base to which you want to convert\n";
	cin>>b2;
	if(!(b2>=2 && b2<=16) && b2==abs(b2))
	{
	    cout<<Invalid
	}
	nd=st2nd(s,b1);
	d2b(nd,b2);
	cout<< "To continue enter 1  : ";
	cin >> x;
}
	return 0;
}
