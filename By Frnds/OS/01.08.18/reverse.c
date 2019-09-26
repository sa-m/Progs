#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter the string \n");
	char arr[100],rev[100];
	scanf("%s",&arr);
	int i=0;
	while(arr[i]!=0)
    {
        i++;
    }
    int j,k=i;
    i--;
    for(j=0;j<k;j++)
    {
        rev[j]=arr[i--];
    }
    printf("%s",rev);
	return 0;
}

//
//int main()
//{
//	printf("enter the string \n");
//	char arr[100],rev[100];
//	gets(arr);
//	int i=strlen(arr);
//    int j,k=i;
//    i--;
//    for(j=0;j<k;j++)
//    {
//        rev[j]=arr[i--];
//    }
//    puts(rev);
//	return 0;
//}
