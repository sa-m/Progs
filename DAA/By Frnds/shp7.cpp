#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\n enter a");
scanf("%d",&a);
printf("\n enter b");
scanf("%d",&b);
printf("\n enter c");
scanf("%d",&c);
if(a>b)
{
	if(a>c)
{
	printf("\n a is greatest");
}
else
{
	printf("\n c is greatest");
}
}
else
{
	if(b>c)
	{
		printf("\n b is greatest");
	}
	else
	{
		printf("\n c is greatest");
	}
}
getch();
return(0);
}
