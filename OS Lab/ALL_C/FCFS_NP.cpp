#include<bits/stdc++.h>
using namespace std;
void avg(int p[], int n, int bt[], int at[])
{
    int i, wt[n], tat[n], rt[n], total_wt = 0, total_tat = 0;
    for (rt[0] = 0,wt[0] = 0,i = 1; i < n ; i++)
    {
        rt[i] = rt[i-1] + bt[i-1];
        wt[i] = rt[i] - at[i];
        if (wt[i] < 0)	wt[i] = 0;
    }
    cout << "\nP.no" << "\tBT" << "\tAT"<< "\tWT" << "\tTAT"<< "\tCT\n";
    for (int i = 0; i < n ; i++)
	{
	    tat[i] = bt[i] + wt[i];
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        int ct = tat[i] + at[i];
        cout <<i+1<<"\t"<<bt[i]<<"\t"<<at[i]<<"\t"<<wt[i]<<"\t"<<tat[i]<<"\t"<<ct<<endl;
    }
	cout << "\nAverage waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
}
int main()
{
    int p[] = {1, 2, 3};
    int n = sizeof p / sizeof p[0];
    int burst_time[] = {5, 9, 6};
    int arrival_time[] = {0, 13, 6};
 
    avg(p, n, burst_time, arrival_time);
 
    return 0;
}
