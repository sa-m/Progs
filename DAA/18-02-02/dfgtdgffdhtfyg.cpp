#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number :\n");
	scanf("%d",&a);
	for(b=0;a>0;a=a/10)
	{
		b=b*10;
	    b=b+a%10;
	}
	if(c==b)
	printf("the number is pallindrom ");
	else
	printf("the number is not a pallindrom");
	return 0;
}
