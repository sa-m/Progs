//check if Leap Year and print all Leap Year upto 2017 from that year
#include<iostream>
using namespace std;
int Leap(int y)
{
    if(y%100!=0 && y%4==0)
        return 1;
    else if(y%100==0 && y%400==0)
        return 1;
    else
        return 0;
}
int main()
{
    int yr,i,c,d;
    cout<<"Enter a Year\n";
    cin>>yr;
    cout<<endl;
    i=Leap(yr);
    if(i==1)
        cout<<yr<<" is a Leap year.\n\n";
    else
        cout<<yr<<" is NOT a Leap year.\n\n";
    if(yr<=2017)
    {
        for(c=yr,d=0;c<2017;c++)
        {
            i=Leap(c);
            if(i==1)
            {
                if(d==0)
                    cout<<"Leap years between "<<yr<<" and 2017 are : \n";
                d++;
                cout<<c<<", ";
            }
        }
        if(d==0)
            cout<<"No Leap years.";
    }
    else
        cout<<"Entered year is greater than 2017";
    return 0;
}
