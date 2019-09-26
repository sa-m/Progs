//String Reverse
#include<bits/stdc++.h>
using namespace std;
int main()
{	string x;	int i;
	cout<<"Enter the String : ";
	getline(cin, x);
	for(i=0;x[i]!='\0';i++);
	for(i--;i>=0;i--)
		cout<<x[i];
	return 0;
}
