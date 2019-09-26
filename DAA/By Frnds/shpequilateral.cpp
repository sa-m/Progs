#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if((n%2==0)&&(n%5==0))
	{
		printf("\n the number is divisible by 2 and 5");
	}
	else {
		printf("\n not divisible");
	}
	getch();
	return(0);
	
}
