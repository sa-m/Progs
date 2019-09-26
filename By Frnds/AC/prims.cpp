#include<stdio.h>
int n,A[10][10],spanning[20][20];
void input()
{
	int i,j;
	printf("Enter the no. of vertices:\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			scanf("%d",&A[i][j]);
		}
		
	}
}
void show()
{
	printf("The required matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}
int prims()
{
	int cost[20][20];
	int u,v,min_dist,dist[20],from[20];
	int visited[20],min_cost,i,j,edges;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i][j]=0)
				cost[i][j]=999;
			else
				cost[i][j]=A[i][j];
				spanning[i][j]=0;
		}
	}
	dist[0]=0;
	visited[0]=1;
	for(int i=1;i<n;i++)
	{
		dist[i]=cost[0][i];
		from[i]=0;
		visited[i]=0;
	}
	min_cost=0;
	edges=n-1;
	
	while(edges>0)
	{
		min_dist=999;
		for(int i=0;i<n;i++)
		{
			if(visited[i]==0 && dist[i]<min_dist )
			{
				v=i;
				min_dist=dist[i];
			}
		}
		u=from[v];
		spanning[u][v]=dist[v];
		spanning[v][u]=dist[v];
		edges--;
		visited[v]=1;
		for(int i=0;i<n;i++)
		{
			if(visited[i]==0 && cost[i][v]<dist[i])
			{
				dist[i]=cost[i][v];
				from[i]=v;
			}
		}
		min_cost=min_cost+cost[u][v];
	}
	return (min_cost);
}
int main()
{
	int total_cost;
	input();
	show();
	total_cost=prims();
	printf("The optimised cost =%d",total_cost);
	return 0;
}
