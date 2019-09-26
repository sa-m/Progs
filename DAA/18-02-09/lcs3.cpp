/* Dynamic Programming implementation of LCS problem */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  char X[100],Y[100]; int m,n,i,j;
  cout<<"Enter 1st String : ";	cin>>X;	m=strlen(X);
  cout<<"Enter 2nd String : ";	cin>>Y;	n=strlen(Y);
  
  int L[m+1][n+1];
 
   for (i=0; i<=m; i++)
     for (j=0; j<=n; j++)
     
       if (i == 0 || j == 0)
         L[i][j] = 0;
         
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
         
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
         
         
    cout<<"\nMatrix : \n";     
    for (i=0; i<=m; i++)
    {	cout<<endl;
		for (j=0; j<=n; j++)
     		cout<<" "<<L[i][j];
    }
     
 
   int ri = L[m][n];
 
   char lcs[ri+1];
   lcs[ri] = '\0';
   i = m, j = n;
   while (i > 0 && j > 0)
   {
      if (X[i-1] == Y[j-1])
      {
          lcs[ri-1] = X[i-1];
          i--; j--; ri--;     
      }
 
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
  cout << "\n\nLCS is : " << lcs;
  return 0;
}
