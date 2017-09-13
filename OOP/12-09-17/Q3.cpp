/**
-> WAP to design a class 'room' with Data Members (height,width & lenght)
-> Calculate Area & volume of the room 
-> Use Copy Constructor to calc area of a similar room
*/
#include<iostream>
using namespace std;
class room
{
	double h,w,l,a,v;
public:
	room()
	{
		cout<<"Enter Height : ";	cin>>h;
		cout<<"Enter Width  : ";	cin>>w;
		cout<<"Enter Length : ";	cin>>l;
	}
	room(room &x)
	{
		h=x.h;	w=x.w;	l=x.l;
	}
	void disp()
	{
		a=2*(l*h+w*h+l*w);
		v=l*w*h;
		cout<<"\nArea : "<<a<<"\nVolume : "<<v<<endl;
	}
};
int main()
{	cout<<"Room 1 :";
	room a;		a.disp();
	cout<<"Room 2 :";
	room b(a);	b.disp();
	return 0;
}


