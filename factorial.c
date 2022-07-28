#include<stdio.h>
int fact(int x)
{
    if(x==0)
        return 1;
    return x*fact(x-1);
}
int main()
{
    int x;
    printf("please enter a number for factorial");
    scanf("%d",&x);
    printf("\n%d",fact(x));
    return 0;
}