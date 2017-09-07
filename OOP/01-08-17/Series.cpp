//Calculate Value of Series
#include<iostream>
#include<math.h>
using namespace std;
class Series
{
    int x,n;
    double s=1.0;
    int fact(int a)
    {
        if(a==1)
            return a;
        else
            return a*fact(a-1);
    }
public:
    void get()
    {
        cout<<"Enter value of x : ";
        cin>>x;
        cout<<"Enter value of n : ";
        cin>>n;
    }
    void calc()
    {
        for(int i=1;i<=n;i++)
            s+=(pow(x,i)/fact(i));
    }
    void disp()
    {
        cout<<"\nThe Value of Series is : "<<s<<endl;
    }
};
int main()
{
    Series S;
    S.get();
    S.calc();
    S.disp();
    return 0;
}
