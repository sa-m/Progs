                                                                                                                                         //sort a given arry in ascending order
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,x,a[10];
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the value of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	printf("in ascending order \n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
	return 0;
}
