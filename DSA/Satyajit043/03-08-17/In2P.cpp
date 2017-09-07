#include<stdio.h>
#include<string.h>
#include<ctype.h>
char st[100];   //Max_Size=100
int top = -1;
void push(char c)
{
    st[++top]=c;
}
char pop()
{
	char x;
	x = st[top];
    st[top--]='\0';
    return x;
}
int pr(char c)
{
	if(c=='^')
        return 3;
    else if(c=='/'||c=='*')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return 0;
}
int main()
{
    int i,j=0,l;
    char ix[100],px[100],c;
    printf("Enter Infix Expression : ");
    gets(ix);
    l=strlen(ix);
    	push('(');
    	ix[l]=')';
    for(i=0;i<=l;i++)
    {
		if(ix[i]=='(')
    		push(ix[i]);
        else if(isalnum(ix[i]))
        	px[j++]=ix[i];														
    	else if(ix[i]=='^'||ix[i]=='/'||ix[i]=='*'||ix[i]=='+'||ix[i]=='-')
        {
            if(pr(ix[i])>pr(st[top]))
                push(ix[i]);
            else
            {
               while(pr(ix[i])<=pr(st[top]))	px[j++]=pop();													
                push(ix[i]);
            }
        }
        else if(ix[i]==')')
        {   while(st[top]!='(')
            {
				c=pop();	
				px[j++]=c;														
			}if(st[top]=='(')	pop();}
    }
        px[j]='\0';
        puts(px);
        return 0;
}



