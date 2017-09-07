//find no. of Vowels, Consonants, Digits & Whitespace present in given String
#include<iostream>
#include<stdio.h>
using namespace std;
class Str
{
    char s[1001];
    int v,co,d,wh;
public:
    void get()
    {
        cout<<"Enter String : \n";
        gets(s);
    }
    void check()
    {
        char c;
        v=0;co=0;d=0;wh=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]==32)
                wh++;
            else if(isdigit(s[i]))
                d++;
            else if(isalpha(s[i]))
            {
                c=toupper(s[i]);
                if(c==65||c==69||c==73||c==79||c==85)
                    v++;
                else
                    co++;
            }
        }
    }
    void disp()
    {
        cout<<"\nIn given string : The no. of \nSpaces : "<<wh<<"\nConsonants : "<<co<<"\nVowels : "<<v<<"\nDigits : "<<d;
    }
};
int main()
{
    Str A;
    A.get();
    A.check();
    A.disp();
    return 0;
}
