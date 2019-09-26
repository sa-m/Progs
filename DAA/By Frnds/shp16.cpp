#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,sum=0;
	printf("enter a number");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
	b=a%10;
  	sum=sum+b*b*b;
	a=a/10;
	}
    if(c==sum)
    {
    	printf("armstrong no.");
    
    }
    else
    {
    	printf("not a armstrong no.");
    }
	getch();
	return(0);
}
