#include<stdio.h>
#include<stdlib.h>
int G[10][10],st[10][10],n;
void main()
{
	int i,j,tc;
    printf("Enter no. of vertices:");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&G[i][j]);
    tc=prim();
    printf("\nSpanning tree matrix:\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d\t",st[i][j]);
    }    
    printf("\n\nTotal cost of Spanning tree=%d",tc);
    return 0;
}
int prim()
{
	int i,j,u,v,mcost,noe,cost[10][10],mdist,dist[10],from[10],done[10];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(G[i][j]==0)
                cost[i][j]=10000;
            else
                cost[i][j]=G[i][j];
                st[i][j]=0;
        }
    dist[0]=0;
    done[0]=1;
    for(i=1;i<n;i++)
    {
        dist[i]=cost[0][i];
        from[i]=0;
        done[i]=0;
    }
    mcost=0;        
    noe=n-1;       
    while(noe>0)
    { 
        mdist=10000;
        for(i=1;i<n;i++)
            if(done[i]==0 && dist[i]<mdist)
            {
                v=i;
                mdist=dist[i];
            }           
        u=from[v]; 
        st[u][v]=dist[v];
        st[v][u]=dist[v];
        noe--;
        done[v]=1;  
        for(i=1;i<n;i++)
            if(done[i]==0 && cost[i][v]<dist[i])
            {
                dist[i]=cost[i][v];
                from[i]=v;
            }
        mcost=mcost+cost[u][v];
    }
    return(mcost);
}
