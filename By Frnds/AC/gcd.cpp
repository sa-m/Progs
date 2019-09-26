#include<iostream>
using namespace std;
int main()
{
          int a,b,c;
          cout<<"Enter 2 numbers : ";
          cin>>a>>b;
          if(a<b)
          {
               c=b;
               b=a;
               a=c;     
          }
          while( b>0)
          {
                    c=a%b;
                    a=b;
                    b=c;
          }
          cout<<"GCD = "<<a;
          return 0;
          
}
