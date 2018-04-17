#include <stdio.h>
#define MAX 100
int fib[MAX];
void init()
{
    int i;
    for(i=0;i<=MAX;i++)
        fib[i]=0;
}
int calc_fib(int num)
{
    if(fib[num]==0)
    {
        if(num<=1)
            return num;
        else
        {
            fib[num]=calc_fib(num-1)+calc_fib(num-2);
            return fib[num];
        }
    }
    else
        return fib[num];
}
int main(int argc, char **argv)
{
	int num;
    scanf("%d",&num);
    init();
    printf("%d",calc_fib(num));
}
