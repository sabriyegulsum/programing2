#include<stdio.h>
int fibo(int x)
{
    int p;
    if(x==0 || x==1)
        return 1;
    else
    p=fibo(x-1)+fibo(x-2);
    printf("%d\n",p);
}
int main()
{
    int x;
    scanf("%d",&x);
    fibo(x);
    return 0;
}