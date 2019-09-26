	#include<stdio.h>
#include<string.h>
int main()
{
    char a,arr[100];
    int i,j=0,k=0;
    printf("enter the string :");
    gets(arr);
    for(i=0;i<128;i++)
    {
        while(arr[j]!=0)
        {
            a=arr[j];
            if(a==i)
            {
                k++;
            }
            j++;

        }
        if(k>0)
            printf("fequency of %c is :%d \n",i,k);
        j=0;
        k=0;
    }
    return 0;
}
