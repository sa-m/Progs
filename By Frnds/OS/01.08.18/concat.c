#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[30],arr2[20];
    printf("enter the first string :");
    gets(arr1);
    printf("enter the second string :");
    gets(arr2);
    int i=0,j=0;
    while(arr1[i]!=0)
    {
        i++;
    }
    while(arr2[j]!=0)
    {
        arr1[i++]=arr2[j++];
    }
    printf("%s",arr1);
    return 0;
}





//int main()
//{
//    char arr1[20],arr2[20],arr3[30];
//    printf("enter the first string :");
//    gets(arr1);
//    printf("enter the second string :");
//    gets(arr2);
//    strcat(arr1,arr2);
//    printf("%s",arr1);
////    puts(arr1);
//    return 0;
//}
