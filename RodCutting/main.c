#include <stdio.h>
#define MAX 100
int max(int a, int b)
{
    return a>b?a:b;
}
int maxProfit(int arrRod[], int arrSize)
{
    int dp[arrSize][arrSize+1],i,j;
    for(i=1;i<arrSize;i++)
        dp[i][0]=arrRod[0];
    for(j=1;j<arrSize+1;j++)
        dp[1][j]=j*arrRod[1];
    /*for(i=2;i<arrSize+1;i++)
        dp[i][1]=dp[1][1];*/
    for(i=2;i<arrSize;i++)
    {
        for(j=1;j<arrSize+1;j++)
        {
            if (i>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-i]+arrRod[i]);
        }
    }
    
    printf("\n     ");
    for(j=0;j<arrSize+1;j++)
        printf("%2d ",j);
    for(i=1;i<arrSize;i++)
    {
        printf("\n(%d)%d ",arrRod[i],i);
        for(j=0;j<arrSize+1;j++)
            printf("%2d ",dp[i][j]);
    }
    return dp[arrSize-1][arrSize];
}

int main(int argc, char **argv)
{
    int arrRod[MAX],arrSize,i;
    scanf("%d",&arrSize);
    arrSize++;
    arrRod[0]=0;
    for(i=1;i<arrSize;i++)
        scanf("%d",&arrRod[i]);
    printf("\n%d",maxProfit(arrRod,arrSize));
	return 0;
}
