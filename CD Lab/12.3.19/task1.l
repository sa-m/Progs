%{
	#include<stdio.h>
int count=0;
%}

%%
[#include].* {}
[if|else|while|for|int|main|return|printf] {}
["][^ "]*["] {}
[/][/][^ \n][\n] {}
[a-zA-Z](a-zA-Z|0-9)* {count++; printf("%s",yytext);}

%%

int main()
{
	yyin=fopen("ex.c","r");
	yylex();
	printf("identifier=%d",count);
	return 0;
}

