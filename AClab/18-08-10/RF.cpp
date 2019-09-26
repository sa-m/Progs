#include<bits/stdc++.h>
using namespace std;
void end(string s, int k, int l)
{	
	for(int j=k;j>0;j--)
		for(int i=k-j; i<l;i+=k)
			cout<<s[i];
}
int main()
{	string s;	int k,ch,i,l;
	cout<<"Enter String : ";
		getline(cin, s);
		l=s.length();
	cout<<"Enter K : ";
		cin>>k;
	cout<<"Enter choice : \n\t1.Encrypt \n\t2.Decrypt\n\n";
		cin>>ch;
	if (ch==2)
	{	
		for(i=l % k; i<k; i++)
			s+=" ";
		s+='\0';
		k=ceil(s.length()/k);
	}
	end(s,k,l);
	return 0;
}
