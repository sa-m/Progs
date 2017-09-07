//Reverse a Entered No.
#include<iostream>
using namespace std;
int main()
{
    int n,d,r=0;
    cout<<"Enter a no. : ";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        r=(r*10)+d;
        n/=10;
    }
    cout<<"\nThe Reversed no. is : "<<r;
    return 0;
}
