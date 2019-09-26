//Print words of a String
#include<bits/stdc++.h>
using namespace std;
int main()
{	string x,y;	int i;
	cout<<"Enter 1st String : ";
	getline(cin, x);
	cout<<"Words in String are : \n";
	for(i=0;x[i]!='\0';i++)
		if(x[i]!=' ')
			cout<<x[i];
		else	cout<<endl;
	return 0;
}
