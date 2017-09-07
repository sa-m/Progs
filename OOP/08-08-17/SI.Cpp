//Simple Interest
#include<iostream>
#include<stdio.h>
using namespace std;
class SI
{
    double p,r,t,si;
public:
    void input()
    {
        cout<<"Enter Principal Amount : Rs ";
        cin>>p;
        cout<<"Enter Rate of Interest : ";
        cin>>r;
        cout<<"Enter Time Period (in yrs): ";
        cin>>t;
    }
    void res()
    {
        si = (p*r*t)/100;
        cout<<"The Simple Interest is Rs ";
        printf("%.2f",si);
    }
};
int main()
{
    SI s;
    s.input();
    s.res();
    return 0;
}
