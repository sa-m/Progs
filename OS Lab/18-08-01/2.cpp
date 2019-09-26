//Freq of Characters
#include<bits/stdc++.h>
using namespace std;
int main()
{	string x;	int i,j,f;	char c;
	cout<<"Enter the String : ";
	getline(cin, x);
	for(j=0;j<128;j++)
	{
		c=char(j);
		for(i=f=0;x[i]!='\0';i++)
			if(x[i]==c)
				f++;
		if(f!=0)
			cout<<"Freq. of "<<c<<" : "<<f<<endl;
	}
	return 0;
}
