#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
    int x,i,t,n,k,h;
    vector<int> a,b;
    cin>>t;
    while(t!=0)
    {
        t--;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        for(i=x=0,h=abs(b[0]);i<n;i++)
            if(abs(b[i])>h)
            {
                h=abs(b[i]);
                x=i;
            }
        if(b[x]<0)
            a[x]-=k;
        else
            a[x]+=k;
        cout<<a[x]<<", "<<b[x]<<endl;
        for(h=i=0;i<n;i++)
            h+=a[i]*b[i];
        cout<<h<<endl;
    }
    return 0;
}
