//Length of String
#include<bits/stdc++.h>
using namespace std;
int main()
{	string x;	int i;
	cout<<"Enter the String : ";
	getline(cin, x);
	for(i=0;x[i]!='\0';i++);
	cout<<"Length of String : "<<i;
	return 0;
}
