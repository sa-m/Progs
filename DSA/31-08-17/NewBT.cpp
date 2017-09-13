#include<stdio.h>
#include<stdlib.h>
typedef struct tree New;
int h; 
struct tree
{
    int x;
    New *l, *r;
};
New *root=NULL;
New *get(int n)
{ 
    New *p = (New*)malloc(sizeof(New));
    p->x = n;
    p->l = p->r = NULL;
    return p;
}
void ino(New *node)
{   if(node!=NULL)
    {
        ino(node->l);
        printf("%d  ",node->x);
        ino(node->r);
    }
}
New* ins(int n, New *node)
{
    if(node==NULL) return get(n);
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
New* min(New *node)
{
    New *p = node;
    while (p->l!=NULL)
        p=p->l;
    return p;
}
New* del(New* node, int n)
{
    if (node == NULL) return node;
    if (n < node->x)
        node->l = del(node->l, n);
    else if (n > node->x)
        node->r = del(node->r, n);
    else
    { //one child or no child
        if (node->l == NULL)
			return node->r;
        else if (node->r == NULL)
			return node->l;
 	//two children
        New *p = min(node->r);	//inorder successor (smallest in the r subtree)        
        node->x = p->x;		// Copy the inorder successor's content to this node       
        node->r = del(node->r, p->x);	// Delete the inorder successor
    }
    return node;
}
int main()
{   int n,ch;
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
                ins(n,root);continue;
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
            if(root==NULL)
            	printf("\nEmpty Tree");
            else
            {
            del(root,n);
			printf("%d is Deleted.",n);
			}
			continue;
        case 0:
            return 0;
        default:
            printf("Invalid Choice");
        }
    }
}

