#include<iostream>
using namespace std;
template <class x>
void swapn(x &a, x &b)
{
    x c;
    c=a;
    a=b;
    b=c;
    cout<<"Swapped "<<a<<", "<<b<<endl;
}
int main()
{
    int a=10,b=20;
    float c=10.5,d=20.5;
    string j="ABC", k="XYZ";
    swapn(a,b);
    swapn(c,d);
    swapn(j,k);
    return 0;
}
