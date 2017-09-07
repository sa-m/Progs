//Armstrong
#include<iostream>
using namespace std;
class Arm
{
    int n;
    int check(int a)
    {
        int b=a,d,s;
        for(s=0;a!=0;a/=10)
        {
            d=a%10;
            s+=d*d*d;
        }
        if(b==s)
            return 1;
        else
            return 0;
    }
public:
    void get()
    {
        cout<<"Enter no. : ";
        cin>>n;
    }
    void disp()
    {
        if(check(n))
            cout<<n<<" is an Armstrong No.";
        else
            cout<<n<<" is NOT an Armstrong No.";
    }
};
int main()
{
    Arm a;
    a.get();
    a.disp();
    return 0;
}
