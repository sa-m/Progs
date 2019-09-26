#include<stdio.h>

int main()
{
	char arr[100],rail[3][30];
	int i,j;
	printf("enter the text:");
	gets(arr);
	
	for(i=0;arr[i]!='\0';i++)
	{
//		if(arr[i]==' ')
//			rail[i%3][i/3]=';';
//		else
		rail[i%3][i/3]=arr[i];
	}
	for(i=0;i<3;i++)
	{
		j=0;
		while(rail[i][j]!='\0')
		{
			printf("%c",rail[i][j]);
			j++;
		}
	}
	return 0;
}
