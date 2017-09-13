#include<stdio.h>
#include<stdlib.h>
typedef struct tree New;
int h;
int temp = 0;
int IN[1001];
struct tree
{
    int x;
    New *r,*l;
};
New *root=NULL;
New* get(int n)
{
    New *p=(New*)malloc(sizeof(New));
    p->x=n;
    p->l=p->r=NULL;
    return p;
}
New* ins(int n, New *node)
{
    if(node==NULL)
        return get(n);
    if(n<node->x)
        node->l = ins(n,node->l);
    if(n>node->x)
        node->r = ins(n,node->r);
    return node;
}
New* src(New* node,int n)
{   h++;
    if( node->r==node->l || node==NULL || node->l->x==n || node->r->x==n)
        return node;
    else if(n<node->x)
        return src(node->l,n);
    return src(node->r,n);
}
void ino(New *node)
{
    if(node!=NULL)
    {
        ino(node->l);
        printf("%d  ",node->x);
        ino(node->r);
    }
}
void inos(New *node)
{
    if(node!=NULL)
    {
        inos(node->l);
        IN[temp]=node->x;
        inos(node->r);
    }
}
void del(New *node, int n)
{
    New *p=src(root, n);
    if(p==NULL || p->r==p->l)
        printf("\nNot Found");
    else
    {
    	{
    		if(p->l->x==n && p->l->r==p->l->l)
    			p->l=NULL;
    		else if(p->r->x==n && p->r->r==p->r->l)
    			p->r=NULL;
		}
		{
			if(p->l->x==n)
				if(p->l->r==NULL)
					p->l=p->l->l;
				else if(p->l->l==NULL)
					p->l=p->l->r;
			else if(p->r->x==n)
				if(p->r->r==NULL)
					p->r=p->r->l;
				else if(p->r->l==NULL)
					p->r=p->r->r;
		}
		{
			for(h=0;IN[h]!=n;h++);
			printf("\n\n%d ",IN[h]);
			printf(" %d\n\n",IN[h+1]);
		}
    }
}
int main()
{
    int n,ch;
    while(1)
    {
        printf("\n\n1-Insert\n2-Display In-Order\n3-Search\n4-Delete\n\n0-Exit\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter No. : ");
            scanf("%d",&n);
            if(root==NULL)
                root=ins(n,root);
            else
                ins(n,root);
            temp = 0; inos(root);
            continue;
        case 2:
            printf("\nIn-Order  :  ");
            ino(root); continue;
        case 3:{
            printf("Enter No. : ");
            scanf("%d",&n);h=0;
            if(n==root->x)
                printf("\nFound in Root Node");
            else{
            New *p=src(root,n);
            if(p==NULL || p->r==p->l)
            	printf("\nNot Found");
            else
            {
                printf("\nParent : %d",p->x);
                if(p->l->x==n)
                    printf("\nFound in Left of Parent");
                else
                    printf("\nFound in Right of Parent");
                printf("\nDepth : %d",h);
            }}
            continue;}
        case 4:
        	printf("Enter No. : ");
            scanf("%d",&n);
            del(root,n);
            printf("%d is Deleted.",n);
            continue;
        case 0:
            return 0;
        default:
            printf("Invalid Choice");
        }
    }
}

