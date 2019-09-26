#include<stdio.h>
#include<stdlib.h>
int a,b,u,v,n,ne=1,i,j,k;
int min, mincost = 0,parent[9],cost[9][9];
int find(int x)
{
	while(parent[x])
	{
		parent[x] = x;
	}
	return x;
}
int uni(int u, int v)
{
	if(u == v)
		return 0;
	else
	{
		parent[v] = u;
		return 1;
	}
}
int main()
{
	printf("\nEnter number of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix: ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j] ==0)
				cost[i][j] = 999;	
		}
	}
	printf("\nAdjecency Matrix is: \n'999' replacing '0's\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",cost[i][j]);	
		}
		printf("\n");
	}
	printf("\nThe edges of the spanning tree: ");
	while(ne < n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;					
				}
			}
		}
		u=find(u);
		v=find(v);
		if(uni(u,v))
		{
			printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
			mincost +=min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\nMinimum cost : ",mincost);
	return 0;
}
