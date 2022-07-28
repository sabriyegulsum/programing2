#include <stdio.h>
int fact(int n)
{
    if(n==1)
        return n;
    else
        return (n*fact(n-1));
}
int main()
{
    int a=5;
    printf("%d",fact(a));
    return 0;
}