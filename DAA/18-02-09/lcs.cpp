#include<iostream>
#include<string.h>
int i,j;
char a[100],b[100],s[100];

using namespace std;
int main()
{
    cout<<"Enter 1st String : ";
    cin>>a;
    cout<<"Enter 2nd string : ";
    cin>>b;
    
    int l1,l2,mi,mj,ps,max=0;
    l1=strlen(s1);
    l2=strlen(s2);
    int ar[l1+1][l2+1];char si[l1+1][l2+1];
    for(i=0;i<=l1;i++)
    {
        for(j=0;j<=l2;j++)
        {
            if(i==0 || j==0)
            {
                ar[i][j]=0;
                si[i][j]='-';
            }
            else if(s1[i-1]==s2[j-1])
            {
            	ar[i][j]=1+ar[i-1][j-1];
                si[i][j]='d';
            }
            else
            {
            	if(ar[i-1][j]<=ar[i][j-1])
            	{
            		ar[i][j]=ar[i][j-1];
            		si[i][j]='l';
            	}
            	else
            	{
                	ar[i][j]=ar[i-1][j];
                	si[i][j]='t';
            	}                                 
        	}	
		}
	}
    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nsign matrix-\n";
    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            cout<<si[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0,j=l2;i<=l1;i++)
	{
    	if(max<ar[i][j])
        {
            max=ar[i][j];
            mi=i;mj=j;
        }
    }
    i=0;
    while(si[mi][mj]!='-')
    {
    	if(si[mi][mj]=='d')
        {
            re[i++]=s1[mi-1];
			mi--;mj--;
        }
        else if(si[mi][mj]=='l')
        	mj--;
        else
        	mi--;
    }
    cout<<"\n\nResult -";
    while(i!=0)
    cout<<re[--i];
    return 0;
}
