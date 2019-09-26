#include<bits/stdc++.h>
using namespace std; 
struct p{   int pno;   int bt;	};
bool chk(p a, p b)
{     return (a.bt < b.bt);		}
int main()
{
	int n,i,wt[n], tat[n], total_wt = 0, total_tat = 0,t;    
	cout<<"Enter no of Processes : ";	cin>>n;
	cout<<"Enter the Brust Times : ";	p pro[n];
	for(i=0;i<n;i++)
	{
		
		pro[i].pno=i+1;
		cin>>pro[i].bt;
	}
	n = sizeof pro / sizeof pro[0];
	sort(pro, pro + n, chk); 
    cout << "\nOrder in which process gets executed\n";
    for (int i = 0 ; i < n; i++)
        cout << pro[i].pno <<" ";
    cout << "\n\nP.no" << "\tBT" << "\tWT" << "\tTAT\n";
    for (wt[0]=0, i = 0; i < n ; i++)
		{
        	wt[i] = pro[i-1].bt + wt[i-1] ;        	
        	total_wt = total_wt + wt[i];
        	tat[i] = pro[i].bt + wt[i];
        	total_tat = total_tat + tat[i];
        	cout << " " << pro[i].pno << "\t"<< pro[i].bt << "\t " << wt[i]<< "\t " << tat[i] <<endl;
		}        	
    cout << "\nAverage waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
    return 0;
}
