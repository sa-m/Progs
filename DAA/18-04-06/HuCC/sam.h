#include<bits/stdc++.h>
using namespace std;
char arr[128]; int freq[128];
int inp()
{
	string s;	char a[128]={0};	int i,j,k;
	cout<<"Enter String : ";
	getline(cin,s);
	for(i=0;s[i]!='\0';i++)
		a[s[i]]++;
	for(i=j=0;i<128;i++)
		if(a[i]>0)	{arr[j]=char(i);	freq[j]=a[i];	j++;}
	return j;
}
struct ch_int {
	char data;
    int freq;
    ch_int *l, *r; 
    ch_int(char data, int freq){ 
        l = r = NULL;
        this->data = data;
        this->freq = freq;
    }
};
