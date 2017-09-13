#include<stdio.h>
#include<stdlib.h>
typedef struct tree New;
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
void ino(New *node)
{
    if(node!=NULL)
    {
        ino(node->l);
        printf("%d  ",node->x);
        ino(node->r);
    }
}
void pre(New *node)
{
    if(node!=NULL)
    {
        printf("%d  ",node->x);
        pre(node->l);
        pre(node->r);
    }
}
void post(New *node)
{
    if(node!=NULL)
    {
        post(node->l);
        post(node->r);
        printf("%d  ",node->x);
    }
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
int main()
{
    int n,ch;
    while(1)
    {
        printf("\n\n1-Insert\n2-See Traversals\n\n0-Exit\n\n");
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
            continue;
        case 2:
            printf("\nPre-Order  : ");
            pre(root);
            printf("\nIn-Order  :  ");
            ino(root);
            printf("\nPost-Order : ");
            post(root); continue;
        case 0:
            return 0;
        default:
            printf("Invalid Choice");
        }
    }
}
