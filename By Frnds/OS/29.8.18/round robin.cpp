#include<bits/stdc++.h>
using namespace std;
struct pro
{
	int no;
	int bt;
	int arv;
};

bool chk(pro a,pro b)
{
	return a.arv<b.arv;
}

bool check(pro arr[],int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	{
		k+=arr[i].bt;
	}
	if(k==0)
		return false;
	else 
		return true;
}
int main()
{
	int i,j,k,n;
	printf("enter the number of processes: ");
	scanf("%d",&n);
	
	pro arr[n+1];
	printf("enter the burst time and arrival time respectively of the processes:\n");
	for(i=0;i<n;i++)
	{
		arr[i].no=i+1;
		printf("task %d :",i+1);
		scanf("%d %d",&arr[i].bt,&arr[i].arv);
	}
	
	
	sort(arr,arr+n,chk);
//	for(i=0;i<n;i++)
//	printf("%d     %d      %d\n",arr[i].no,arr[i].bt,arr[i].arv);

	printf("\n\n\n\njob time\n");	
	int time=0;
	while(check)
	{
		for(i=0;i<n;i++)
		{
			if(arr[i].bt!=0 && time>=arr[i].arv)
			{
				if(arr[i].bt>4)
				{
					time+=4;
					arr[i].bt-=4;
					printf("%d   %d\n",arr[i].no,4);
				}
				else
				{
					time+=arr[i].bt;
					printf("%d   %d\n",arr[i].no,arr[i].bt);					
					arr[i].bt=0;										
				}
			
			}

		}
	}
}
