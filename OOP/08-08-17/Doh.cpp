//Dec to octal & HexaDecimal
#include<iostream>
#include<string.h>
using namespace std;
class DOH
{
    int x,ch;char s[20];
    char reVal(int d)
    {
        if(d>=0&&d<=9)
            return (char)(d+'0');
        return (char)(d-10+'A');
    }
    char* con(char s[], int b, int n)
    {   int i=0;
        for(;n>0;n/=b)
            s[i++] = reVal(n%b);
        s[i]='\0';
        return strrev(s);
    }
public:
    void inp()
    {
        cout<<"Enter Decimal NO. : ";
        cin>>x;
        cout<<"\nPress : 1- convert to Octal\n\t2- Convert to HexaDecimal\n";
        cin>>ch;
        cout<<endl;
    }
    void out()
    {
        if(ch==1)
            cout<<x<<" in Octal is : "<<con(s,8,x)<<endl;
        else if(ch==2)
            cout<<x<<" in HexaDecimal is : "<<con(s,16,x)<<endl;
        else
            cout<<"Invalid Choice";
    }
};
int main()
{
    DOH N;
    N.inp();
    N.out();
    return 0;
}
