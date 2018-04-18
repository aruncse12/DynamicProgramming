#include <stdio.h>
int coverDist(int dist)
{
    int count[dist+1],i;
    count[0]=1;count[1]=1;count[2]=2;
    for(i=3;i<=dist;i++)
    {
        count[i]=count[i-1]+count[i-2]+count[i-3];
    }
    return count[dist];
}
int main(int argc, char **argv)
{
    int dist;
    scanf("%d",&dist);
    printf("%d",coverDist(dist));
}
