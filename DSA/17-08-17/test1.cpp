#include<iostream>
using namespace std;
int arr[4]; //Max_Size = 4
int main()
{
	int i;
	for(i=0;i<10;i++)
		cin>>arr[i];
	cout<<endl;
	for(i=0;i<10;i++)
		cout<<arr[i]<<", ";
	return 0;
}
