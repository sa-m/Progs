/**Calculate Electric Bill of an Household
    -> first 100 units @ 50p/Unit.
    -> next 200 units @ 80p/Unit.
    -> above 300 units @ Rs 1.30/Unit

    The board has a minimal charge of Rs 70.
    15% of the amount is added if no. of unit is above 300 */

#include<iostream>
#include<stdio.h>
using namespace std;
class Bill
{
    int u;
    double c;
public:
    void get()
    {
        cout<<"Enter no. of units : ";
        cin>>u;
    }
    void calc()
    {
        c=0.0;
        if(u<=100)
            c=u*0.5;
        else if(u<=300)
            c=50+(u-100)*0.8;
        else
        {
            c=210 + (u-300)*1.3;
            c=1.15*c;
        }
        if(c<70.0)
            c=70.0;
    }
    void disp()
    {
        cout<<"\nElectric bill for the household is : Rs. ";
        printf("%.2f",c);
    }
};
int main()
{
    Bill A;
    A.get();
    A.calc();
    A.disp();
    return 0;
}
