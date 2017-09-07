/**Print the Series
    Az By Cx ..... Za
    Using single Variable */
#include<iostream>
using namespace std;
int main()
{
    for(int n=65;n<=90;n++)
        cout<<(char)n<<(char)(187-n)<<" ";
    cout<<endl;
    return 0;
}
