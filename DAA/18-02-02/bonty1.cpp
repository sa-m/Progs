#include<stdio.h>
int main()
{
	int a,b,c,res=0;
	printf("enter the integer:/n");
	scanf("%d",&a);
	b=a;
	while (b!=0)
	{
		c=b%10;
		res +=c*c*c;
		b=b/10;
	}
	if(a==res)
	printf("entered number is armstrong number :\n");
	else
	printf("entered number is not an armstrong number :\n");
	return 0;
}
