#include<stdio.h>
#include<stdlib.h>
struct list
{
	int x;
	struct list *l;
};
typedef struct list New;
New *h = NULL;
New* getnode()
{
	New *p =(list*) malloc(sizeof(New));
	printf("\nEnter Data : ");
	scanf("%d",&p->x);
	p->l = NULL;
	return p;
}
void insbeg()
{
	New *p=getnode();
	p->l=h;
	h=p;
}
void delbeg()
{
	New *p=h;
	h=h->l;
	printf("%d Deleted.",p->x);
}
void insend()
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
void delend()
{
    New *x=h;
    for(;x->l->l!=NULL;x=x->l);
    x->l=NULL;
    printf("%d Deleted.",x->x);
}
void delpos()
{
    int i,n;
	printf("Enter Position : ");
	scanf("%d",&n);
	New *x=h;
	for(i=1;i<n-1;i++)
		x=x->l;
    x->l=x->l->l;
    printf("%d Deleted.",x->l->x);
}
void inspos()
{
	int i,n;
	printf("Enter Position : ");
	scanf("%d",&n);
	New *x=getnode(),*y=h,*z;
	for(i=0;i<n-2;i++)
		y=y->l;
	z=y->l;
	y->l=x;
	x->l=z;
}
void rev()
{
	New *x=h,*y=x->l,*z;
	for(x->l=NULL;y!=NULL;y=z)
	{
		z=y->l;
		y->l=x;
		x=y;
	}h=x;
	printf("\n\nList Reversed");
}
void disp()
{
	New *p=h;
	if(p==NULL)
		printf("\n\nList Empty");
	else
		printf("\n\nList : \n");
	while(p!=NULL)
	{
		printf("%d  ",p->x);
		p = p->l;
	}
}
int main()
{
	int n;
	while(1){
	printf("\n\nEnter : 1- Insert at Beginning\n\t2- Insert at any position");
    printf("\n\t3- Insert at End\n\n\t4- Delete from Beginning");
    printf("\n\t5- Delete from any position\n\t6- Delete from End\n");
    printf("\n\t8- Reverse\n\t9- Display\n\n\t0- Exit\n\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				insbeg();continue;
		case 2:
				inspos();continue;
		case 3:
				insend();continue;
		case 4:
				delbeg();continue;
		case 5:
				delpos();continue;
        case 6:
				delend();continue;
		case 8:
				rev();   continue;
		case 9:
				disp();  continue;
		case 0:
			return 0;
		default:
			printf("\n\nInvalid Input");
	}
}return 0;}
