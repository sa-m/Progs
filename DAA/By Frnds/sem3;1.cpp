#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,s,a[100];
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("elements are:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("enter a no. to search");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("number is present in the array of location %d",s=i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("%d no. is not in the array",s);
	}
	getch;
	return 0;
	
	
	
	
	
}
