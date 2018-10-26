#include <stdio.h>
#include <string.h>
#define MAX 100
int min(int a, int b, int c)
{
    return (a<b?(a<c?a:(c<b?c:b)):(b<c?b:(c<a?c:a)));
}
int minEdit(char x[], char y[], int m, int n)
{
    int minDist[m+1][n+1],i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0)
                minDist[i][j]=j;
            else if(j==0)
                minDist[i][j]=i;
            else if (x[i-1]==y[j-1])
                minDist[i][j]=minDist[i-1][j-1];
            else
                minDist[i][j]=1+min(miDsWWWWWWWWWW1DO;......./LnDist[i-1][j-1],minDist[i][j-1],minDist[i-1][j]);
        }
    }
    return minDist[m][n];
}
int main(int argc, char **argv)
{
    char x[MAX], y[MAX];
    int m,n;
    scanf("%s %s", &x, &y);
    m=strlen(x);
    n=strlen(y);
	printf("\n%d",minEdit(x,y,m,n));
	return 0;
}
