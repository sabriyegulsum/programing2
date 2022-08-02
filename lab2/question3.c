#include<stdio.h>
int f(int x)
{
    if(x==0)
        return 0;
    else
        return x%10+f(x/10);
}
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("sum of digit :%d",f(x));
    return 0;
}