#include<stdio.h>
int main()
{
	int i,j,k;
	int a[3][3],b[3][3],c[3][3];
	            
	printf(" enter the element of the first mtrix\n");
	
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		}
	
	printf("enter the values of the second matrix\n");
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			scanf("%d",&b[j][k]);
		}
	}
	printf("the multiplication matrix is \n");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			 c[i][k]=a[i][j]*b[j][k];
			 printf("%d\t",c[i][k]);
		}printf("\n");
	}	printf("\n");

	return 0;
}
