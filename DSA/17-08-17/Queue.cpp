#include<stdio.h>
#define Size 5
int Q[Size];
int f = -1;
int r = -1;
void disp()
{
    int i,c;
    if(f==-1||f>r)
    {
        printf("\n\t\t\tEmpty Queue");
        return;
    }
    printf("\n\t\t\t");
    for(i=f;i<=r;i++)
        printf("%d ",Q[i%Size]);
}
void enQ()
{
    int a;
    if(r-f==Size-1)
        printf("\n\t\t\tOverflow");
    else
    {
    	if(f==-1)
    		f=0;
    	r++;
        printf("\n\t\t\tEnter No. : ");
        scanf("%d",&a);
        printf("\n\t\t\t%d is added to Queue.",a);
        Q[r%Size]=a;
    }
}
void deQ()
{
    if(f==-1||f>r)
    	printf("\n\t\t\tUnderflow");
    else
    {
        printf("\n\t\t\t%d has been removed.",Q[f%Size]);
        if(f==r)
        {
			f=-1;r=-1;
		}
		else
			f++;
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("\n\nEnter : 1- EnQueue \n\t2- DeQueue");
        printf("\n\t3- Display Queue \n\t4- Exit\n\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
                enQ();  continue;
        case 2:
                deQ();  continue;
        case 3:
                disp(); continue;
        case 4:
            return 0;
        default:
            printf("\n\t\t\tInvalid Choice");
        }
    }
    return 0;
}
