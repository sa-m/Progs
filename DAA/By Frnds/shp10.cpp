#include<stdio.h>
#include<conio.h>
int main()
{
	char o,add;
	float a,b,c;
	printf("\n enter your choice");
	scanf("%c",&o);
	printf("\n enter the value of a and b");
	scanf("%f%f",&a,&b);
	switch(o)
	{
		case '1':c=a+b;
		    printf("\n addition is %f",c);
		    break;
		case'2':c=a-b;
		        printf("\n substraction is %f",c);
				break;    
	
		deffult:printf("no result found");
	}
	getch();
	return(0);
}
