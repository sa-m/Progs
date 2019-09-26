#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number :\n");
	scanf("%d",&a);
	for(b=0;a>0;a=a/10)
	{
		b=b*10;
		b=b+a%10;
	}
	printf("after reverse the number");
	printf("the number is %d",b);
	return 0;
}
