#include <stdio.h>
#include <stdbool.h>
#define MAX 100
int minTwoSubSets(int arrNum[], int arrSize, int arrSum)
{
    bool dp[arrSize+1][arrSum+1];
    int i, j;
    
    for(i=0;i<=arrSize;i++)
        dp[i][0]=true;
    for(j=1;j<=arrSum;j++)
        if(arrNum[0]==j)
            dp[0][j]=true;
        else
            dp[0][j]=false;
    for(i=1;i<arrSize;i++)
    {
        for(j=1;j<=arrSum;j++)
        {
            if(arrNum[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arrNum[i-1]];
        }
    }
    printf("\n X ");
    for(j=0;j<=arrSum;j++)
    {
        printf("%2d ", j);
    }
    for(i=0;i<arrSize;i++)
    {
        printf("\n%2d ", arrNum[i]);
        for(j=0;j<=arrSum;j++)
        {
            printf("%2d ", dp[i][j]);
        }
    }
    
    for(j=arrSum/2;j>=0;j--)
    {
        if(dp[arrSize][j])
        {
            return arrSum-2*j;
        }
    }
    return arrSum;
}
int main(int argc, char **argv)
{
	int arrNum[MAX], arrSize, arrSum=0, i;
    scanf("%d", &arrSize);
    for(i=0;i<arrSize;i++)
    {
        scanf("%d", &arrNum[i]);
        arrSum+=arrNum[i];
    }
    printf("\n%d",minTwoSubSets(arrNum, arrSize, arrSum));
}
