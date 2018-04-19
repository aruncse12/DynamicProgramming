#include <stdio.h>
#include <stdbool.h>
#define MAX 100
int arrNum[MAX][MAX], arrSize, arrlongPath[MAX][MAX], si, sj;
bool diff1(int a, int b)
{
    if(a-b==-1||a-b==1)
        return true;
    else
        return false;
}
int longPath(int i, int j, int opr, int sum)
{
    if(opr!=3)
    {
        if(i<arrSize-1)
        {
            if(diff1(arrNum[i][j],arrNum[i+1][j]))
            {
                printf("-->%d",arrNum[i+1][j]);
                sum+=arrNum[i+1][j];
                longPath(i+1, j, 1, sum);
            }
            else
            {
                if(sum>arrlongPath[si][sj])
                    arrlongPath[si][sj]=sum;
                printf("\n");
            }
        }
    }
    
    if(opr!=4)
    {
        if(j<arrSize-1)
        {
            if(diff1(arrNum[i][j],arrNum[i][j+1]))
            {
                printf("-->%d",arrNum[i][j+1]);
                sum+=arrNum[i][j+1];
                longPath(i, j+1, 2, sum);
            }
            else
            {
                if(sum>arrlongPath[si][sj])
                    arrlongPath[si][sj]=sum;
                printf("\n");
            }
        }
    }
    if(opr!=1)
    {
        if(i>0)
        {
            if(diff1(arrNum[i][j],arrNum[i-1][j]))
            {
                printf("-->%d",arrNum[i-1][j]);
                sum+=arrNum[i-1][j];
                longPath(i-1, j, 3, sum);
            }
            else
            {
                if(sum>arrlongPath[si][sj])
                    arrlongPath[si][sj]=sum;
                printf("\n");
            }
        }
    }
    if(opr!=2)
    {
        if(j>0)
        {
            if(diff1(arrNum[i][j],arrNum[i][j-1]))
            {
                printf("-->%d",arrNum[i][j-1]);
                sum+=arrNum[i][j-1];
                longPath(i, j-1, 4, sum);
            }
            else
            {
                if(sum>arrlongPath[si][sj])
                    arrlongPath[si][sj]=sum;
                printf("\n");
            }
        }
    }
}
int main(int argc, char **argv)
{
    int i, j;
    scanf("%d", &arrSize);
    for(i=0;i<arrSize;i++)
        for(j=0;j<arrSize;j++)
            scanf("%d",&arrNum[i][j]);
    for(i=0;i<arrSize;i++)
    {
        for(j=0;j<arrSize;j++)
        {
            arrlongPath[i][j]=0;
            si=i;sj=j;
            printf("%d\n",arrNum[i][j]);
            longPath(i,j,0,arrNum[i][j]);
        }
    }
    
    for(i=0;i<arrSize;i++)
    {
        printf("\n");
        for(j=0;j<arrSize;j++)
            printf("%d ",arrlongPath[i][j]);
    }
        
    //printf("\n%d",arrNum[2][1]);
    //longPath(2,1,0);
	return 0;
}
