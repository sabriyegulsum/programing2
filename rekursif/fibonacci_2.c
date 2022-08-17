#include<stdio.h>
int fibo(int x)
{
    int p;
    if(x==0 || x==1)
        return 1;
    else
    return fibo(x-1)+fibo(x-2);
}
int main()
{
    int x;
    scanf("%d",&x);
    fibo(x);
    return 0;
}