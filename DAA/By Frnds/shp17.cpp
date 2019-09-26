#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,sum=0,n;
	printf("enter a number");
	scanf("%d",&a);
	printf("\n enter the value of n");
	scanf("%d",&n);
	c=a;
	while(a>0)
	{
	b=a%10;
  	sum=sum+pow(b,n);
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
