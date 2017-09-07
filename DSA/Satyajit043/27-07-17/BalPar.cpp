#include<stdio.h>
char x[100],st[100];
int t = -1;
void push(int a)
{
    st[++t]=a;
}
void pop()
{
    st[t]='\0';t--;
}
int inp()
{   int i;
    printf("Enter Expression : ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
        if(x[i]=='[' ||x[i]=='(' ||x[i]=='{')
            push(x[i]);
        else if(x[i]==']' ||x[i]==')' ||x[i]=='}')
            if(st[t]=='(' && x[i] == ')')
                pop();
            else if(x[i] == st[t]+2)
                pop();
            else
                return 1;
    return 0;
}
int main()
{
   int i = inp();
    if(t==-1 && i==0)
        printf("\nBalanced Expression\n");
    else
        printf("\nExpression NOT Balanced\n");
    return 0;
}
