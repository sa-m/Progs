#include<iostream>
using namespace std;
int main()
{
          int a,b,z;
          cout<<"Enter 2 numbers : \n";
          cin>>a>>b;
          if(a<b)
          {
                    int z=a;
                    a=b;
                    b=z;
          }
          z=a;
          int q,s1=1,s2=0,t1=0,t2=1,c,s,t;
          while(b>0)
          {
                    q=a/b;
                    c=a%b;
                    a=b;
                    b=c;
                    s=s1-(q*s2);
                    s1=s2;
                    s2=s;
                    t=t1-(q*t2);
                    t1=t2;
                    t2=t;
                    cout<<q<<"\n";
                    
          }
          if(t1<0)
                  t1=t1+z;
          cout<<"GCD ="<<a<<"\tS ="<<s1<<"\tT ="<<t1;
          return 0;
}
