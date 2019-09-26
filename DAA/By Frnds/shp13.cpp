#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,sum=0;
	printf("enter a nuber");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
	b=a%10;
	sum=(sum*10)+b;
	a=a/10;
	}
    if(c==sum)
    {
    	printf("pallindrome");
    
    }
    else
    {
    	printf("not a pallindrome");
    }
	getch();
	return(0);
}
