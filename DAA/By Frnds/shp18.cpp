#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}	
	getch();
	return(0);
}
