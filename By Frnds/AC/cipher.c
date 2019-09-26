#include<stdio.h>
#include<string.h>
void encrypt(char a[], int s)
{

	char ch[100];
	int i,j;

	for(i=0;a[i]!='\0';i++)
	{
		j=a[i];
		j=j-65;
		ch[i]=(char)(65+((j+8)%26));
		printf("%c",ch[i]);
	}
	

}
int main()
{
	char a[100],x=(char)32;
	printf("\n enter a text: ");
	gets(a);
	encrypt(a,4);
	return 0;
}
