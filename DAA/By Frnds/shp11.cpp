# include<stdio.h>
#include<conio.h>
int main()
{
	int fact=1 ,i=1,n;
	printf("\n enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i=i+1;
	}
	printf("%d",fact);
	getch();
	return(0);
	
	
}
