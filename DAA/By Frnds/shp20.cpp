#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int main()
{
int a,b,sum=0;
printf("value of a and b");
scanf("%d %d",&a,&b);
sum=add(a,b);
printf("sum is %d",sum);
getch();
return(0);
}
int add (int a,int b)
{
	int   sum=0;
	sum=a+b;
	return sum;
}
