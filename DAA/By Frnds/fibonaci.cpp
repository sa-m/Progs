#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,i,n,b=1,c;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
	return 0;
}
