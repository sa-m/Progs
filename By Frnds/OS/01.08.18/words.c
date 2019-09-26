#include<stdio.h>
#include<string.h>
int main()
{
    printf("enter the string :");
    char arr[100];
    gets(arr);
    int j,i=strlen(arr);
    for(j=0;j<i;j++)
    {
        if(arr[j]==' ')
            printf("\n");
        else
            printf("%c",arr[j]);
    }
    return 0;
}
