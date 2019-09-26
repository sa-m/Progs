                                                                                                                                         //sort a given arry in ascending order
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,x,a[10];
	printf("enter the value of array \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
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
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]==a[4])
		{
		printf("\n middle element is %d",a[i]);
		}
	}

	getch();
	return 0;
}
