#include <stdio.h>
#define MAX 100
int fib[MAX];
int calc_fib(int num)
{
    int i;
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=num;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[num];
}
int main(int argc, char **argv)
{
	int num;
    scanf("%d",&num);
    printf("%d",calc_fib(num));
}
