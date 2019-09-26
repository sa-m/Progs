#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter a number");
	scanf("%d",&a);
	for(sum=0;a>0;a=a/10)
	{
		b=a%10;
		sum=sum+b;
	}
	printf("the sum of the digit is %d",sum);
	return 0;
}
