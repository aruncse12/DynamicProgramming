#include <stdio.h>
#define MAX 100
int lis(int arrNum[], int arrSize)
{
    int arrLis[arrSize],max,i,j;
    for(i=0;i<arrSize;i++)
        arrLis[i]=1;
    for(i=1;i<arrSize;i++)
        for(j=0;j<i;j++)
            if(arrNum[j]<arrNum[i]&&arrLis[i]<arrLis[j]+1)
                arrLis[i]=arrLis[i]+1;
    max=arrLis[0];
    for(i=1;i<arrSize;i++)
        if(max<arrLis[i])
            max=arrLis[i];
    return max;
}
int main(int argc, char **argv)
{
	int arrNum[MAX], arrSize, i;
    scanf("%d",&arrSize);
    for(i=0;i<arrSize;i++)
        scanf("%d",&arrNum[i]);
    
    for(i=0;i<arrSize;i++)
        printf("%d ",arrNum[i]);
    
    printf("\n%d",lis(arrNum,arrSize));
}
