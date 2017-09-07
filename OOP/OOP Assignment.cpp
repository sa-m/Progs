#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class Test
{
public:
    int n,i;
    bool allUnique(int x[100])
    {
        sort(&x[0],&x[n-1]);
        for(i=1;i<n;i++)
            if(x[i]==x[i-1])
                return false;
        return true;
    }
};
class Test1
{
    int i,j,k;
public:
char MaxChar(string s)
    {
        int x[128]={0};
        for(i=0;s[i]!='\0';i++)
            x[(int)s[i]]++;
        for(i=j=0,k=x[0];i<128;i++)
            if(x[i]>k)
            {
                k=x[i];
                j=i;
            }
        return (char)j;
    }
    string formUnique(string s)
    {
        char y[100];
        for(j=i=0;s[i]!='\0';i++)
            if(s.find(s[i])==string::npos)
            {
                 y[j]=s[i];
                 j++;
            }
            y[j]='\0';
        return y;
    }
    string SeparateWord(string s)
    {
        string x,y;
        for(i=j=k=0;s[i]!='\0';i++)
            if(isalnum(s[i]))
                if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    x[j]=s[i];
                    j++;
                }
                else
                {
                    y[k]=s[i];
                    k++;
                }
        return (x+" "+y);
    }
    string FindRepeats(string s)
    {
        string y,x;
        for(j=i=0;s[i]!='\0';i++)
            if(y.find(s[i])==string::npos)
            {
                 y[j]=s[i];
                 j++;
            }
        for(j=i=0;s[i]!='\0';i++)
            if(y.find(s[i])!=string::npos)
            {
                 x[j]=s[i];
                 j++;
            }
        return x;
    }
    string FormPallindrome(string s)
    {

    }
};
int main()
{
    Test a;Test1 b;
    int ch=2;
    switch(ch)
    {
    case 1:
        {
            int x[100];
            cout<<"Enter value of n : ";
            cin>>a.n;
            cout<<"Enter Numbers : ";
                for(int i=0;i<a.n;i++)
                    cin>>x[i];
            if(a.allUnique(x)==true)
                cout<<"True";
            else
                cout<<"False";
            break;
        }
    case 2:
        {
            string s;
            cout<<"Enter String : ";
            cin>>s;
            cout<<"The max repeated char is : "<<b.MaxChar(s);
            break;
        }
    }
    return 0;
}
