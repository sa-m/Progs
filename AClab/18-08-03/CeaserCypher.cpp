#include<bits/stdc++.h>
using namespace std;

string s;	int k;
void encode()
{
	for(int i=0;s[i]!='\0';i++)
		if(isalpha(s[i]))
			s[i]+=k;
}
void decode()
{
	for(int i=0;s[i]!='\0';i++)
		if(isalpha(s[i]))
			s[i]-=k;
}
int main()
{
	int ch;
	cout<<"Ceaser Cypher\n\t1. Encode\n\t2. Decode\n\n";
	cin>>ch;
	cout<<ch<<endl;
	if(ch==1 && ch==2)
	{
		cout<<"Enter String : ";
		getline(cin, s);
		if(ch==1)	encode();
		else		decode();
		cout<<"Output String : "<<s;
		return 0;
	}
	else
	{
		cout<<"Invalid String.";
		return 0;
	}
}

