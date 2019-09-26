%{
	#include<stdio.h>
	#include<string.h>
int count=0,longest=0;
char arr[20];
%}

%%
[a-zA-Z]* {
	count=yyleng;
	if(count>longest)
	{
		longest=count;
		strcpy(arr,yytext);
	}
}

%%

int main()
{
	yyin=fopen("ex.c","r");
	yylex();
	printf("identifier=%d, %s\n",longest,arr);
	return 0;
}

