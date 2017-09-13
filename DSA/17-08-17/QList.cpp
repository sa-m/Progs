#include<stdio.h>
#include<stdlib.h>
struct Q
{
	int x;
	struct Q *l;
};
typedef struct Q New;
New *h = NULL;
New* getnode()
{
	New *p =(Q*) malloc(sizeof(New));
	printf("\nEnter Data : ");
	scanf("%d",&p->x);
	p->l = NULL;
	return p;
}
void enQ()
{
	New *p=getnode(),*q;
	if(h==NULL)
		h=p;
	else
	{
		q=h;
		while(q->l!=NULL)
			q=q->l;
		q->l=p;
	}
}
void deQ()
{
	New *p=h;
	if(p==NULL)
	{
		printf("\n\nUnderFlow");
		return;
	}
	h=h->l;
	printf("%d Deleted.",p->x);
}
void disp()
{
	New *p=h;
	if(p==NULL)
		printf("\n\nQueue Empty");
	else
		printf("\n\nQueue : \n");
	while(p!=NULL)
	{
		printf("%d  ",p->x);
		p = p->l;
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
