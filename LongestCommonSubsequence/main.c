#include <stdio.h>
#include <string.h>
#define MAX 100
int lcs(char x[], char y[], int m, int n)
{
    int L[m+1][n+1],i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                L[i][j]=0;
            else if(x[i-1]==y[j-1])
                L[i][j]=L[i-1][j-1]+1;
            else
                L[i][j]=(L[i-1][j]>L[i][j-1]?L[i-1][j]:L[i][j-1]);
        }
    }
    return L[m][n];
}
int main(int argc, char **argv)
{
	char x[MAX], y[MAX];
    int m, n;
    scanf("%s %s", &x, &y);
    m=strlen(x);
    n=strlen(y);
    printf("\n%d",lcs(x,y,m,n));
}
