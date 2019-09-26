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
	return a.bt<b.bt;
}

void small(pro arr[],int n)
{
	int s=0,i;
	for(i=1;i<n;i++)
	{
		if(arr[s].arv > arr[i].arv)
			s=i;
	}
	pro temp=arr[0];
	arr[0]=arr[s];
	arr[s]=temp;
}


int main()
{
	int i,j,k,n,arrival[100],ft[100];
	printf("enter the number of processes: ");
	scanf("%d",&n);
	
	pro arr[n+1];
	printf("enter the burst time and arrival time respectively of the processes:\n");
	for(i=0;i<n;i++)
	{
		arr[i].no=i+1;
		printf("task %d :",i+1);
		scanf("%d %d",&arr[i].bt,&arr[i].arv);
		arrival[i+1]=arr[i].arv;
	}
	
	
	sort(arr,arr+n,chk);

	
	int time=0;
	while(arr[0].bt!=999)
	{
	
		if(arr[0].arv<=time)
		{
			arr[0].bt-=1;
			printf("%d   %d   %d\n",time+1,arr[0].no,arr[0].bt);
		}
		else
		{
			small(arr,n);
			if(arr[0].arv<=time)
			{
				arr[0].bt-=1;
				printf("%d   %d - %d\n",time+1,arr[0].no,arr[0].bt);	
			}
			else 
				printf("%d\n",time+1);
		}
		time+=1;
		if(arr[0].bt==0)
		{
			arr[0].bt=999;
			arr[0].arv=999;
			ft[arr[0].no]=time;
		}

		sort(arr,arr+n,chk);	
	}
}
