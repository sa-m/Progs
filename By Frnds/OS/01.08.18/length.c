#include<stdio.h>
int main()
{
	printf("enter the string \n");
	char arr[100];
	scanf("%s",&arr);
	int i=0;
	while(arr[i]!=0)
    {
        i++;
    }
    printf("length of string is %d",i);
	return 0;
}



//int main()
//{
//	printf("enter the string \n");
//	char arr[100];
//	gets(arr);
//    printf("length of string is %d",strlen(arr));
//	return 0;
//}
