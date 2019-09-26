#include<stdio.h>
#include<conio.h>
int main()
{
	
	int mark;
	printf ("\n enter your mark");
	scanf("%d",&mark);
if (mark>600)
	{ 
		printf("Excellent");
	} 
else	 if(mark>=360 && mark<=600)
	{
		printf("\n 1st divison");
	}
	else if(mark>=300 && mark<360)
	{
		printf("\n 2nd division");
	}
	else if( mark>=180 && mark<300)
	{
		printf("\n 3rd division");
	}
	else
	{
		printf("\n fail");
	}
	getch();
	return(0);
}
