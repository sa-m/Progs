#include<stdio.h>
#include<conio.h>
int main()
{
int	i,j,p=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",p);
			p=p+1;
		}
		printf("\n");
	}
	
	getch();
	return(0);
}
