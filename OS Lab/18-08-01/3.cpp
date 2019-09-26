//String Concatination
#include<bits/stdc++.h>
using namespace std;
int main()
{	char x[100],y[100],z[200];	int i,j;
	cout<<"Enter 1st String : ";
	gets(x);
	cout<<"Enter 2nd String : ";
	gets(y);
	for(i=0;x[i]!='\0';z[i]=x[i],i++);
	for(j=0;y[i]!='\0';z[i]=y[j],i++,j++);
	z[i]='\0';
	cout<<z;
	return 0;
}
