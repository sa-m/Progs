#include<stdio.h>
int arr[4]; //Max_Size = 5
int top = -1;
void disp()
{
    int i;
    if(top==-1)
        printf("\n\t\t\tEmpty Stack");
    printf("\n\t\t\t");
    for(i=0;i<=top;i++)
        printf("%d, ",arr[i]);
}
void push()
{
    int a;
    if(top<4)
    {
        top++;
        printf("\n\t\t\tEnter No. : ");
        scanf("%d",&a);
        printf("\n\t\t\t%d is added to Stack.",a);
        arr[top]=a;
    }
    else
        printf("\n\t\t\tStack Overflow");
}
void pop()
{
    if(top>-1)
    {
        printf("\n\t\t\t%d has been removed.",arr[top]);
        arr[top]='\0';
        top--;
    }
    else
        printf("\n\t\t\tStack Underflow");
}
int main()
{
    int n;
    while(1)
    {
        printf("\n\nEnter : 1- Push \n\t2- Pop");
        printf("\n\t3- Display Stack \n\t4- Exit\n\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
                push();
                continue;
            }
        case 2:
            {
                pop();
                continue;
            }
        case 3:
            {
                disp();
                continue;
            }
        case 4:
            return 0;
        default:
            printf("\n\t\t\tInvalid Choice");
        }
    }
    return 0;
}
