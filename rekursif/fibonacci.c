#include<stdio.h>
int fibo(int x)
{
    if(x==0 ||x==1)
        return 1;
    else
        return fibo(x-1)+fibo(x-2);
}
int main()
{
    int x;
    printf("Please enter number for bibonacci sequence");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
        printf("\nnumber %d:%d",i,fibo(i));
    return 0;
}