#include<stdio.h>
int main()
{   int p[100],n,i,j,k,L,q;
	printf("Enter Size of array : "); 
	scanf("%d",&n);
	printf("Enter the Array : ");	
	for(i=0;i<n;scanf("%d",&p[i]),i++);
    int m[n][n];
 	for (i=0; i<n; m[i][i] = 0,i++);
    for (L=2; L<n; L++)
        for (i=1; i<=n-L; i++)
        {   j = i+L-1;
            m[i][j] = 99999;
            for (k=i; k<=j-1; k++)
            {   q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        } 
    for(i=1;i<n;printf("\n"),i++)
      	for(j=i;j<n;printf("%d\t",m[i][j]),j++);
    printf("\n\nMinimum number of multiplications is : %d", m[1][n-1]);
    return 0;
}
