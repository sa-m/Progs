//with no parameter and no return type
#include<stdio.h>
#include<conio.h>
void add();
void main() 
{
	add();
	getch();
}
void add()
{
	int a,b,sum=0;
	printf("enter the value of two numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
}

