//programm to find an element to the given array of size 10
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[10],i,n,counter=0;
	printf("\n enter the element on the array ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element to find");
	scanf("%d",&n);

	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			counter++;
			printf("the element is present at %d",i);
		}	
	}
	printf("\n");
	if(counter==0)
	{
		printf("the element is not present");
	}
 	return 0;
}
	 
