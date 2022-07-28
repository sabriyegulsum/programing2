#include <stdio.h>
int faktoriyel(int a)
{
    if(a==1)
    {
        return 1;
    }
        return a*faktoriyel(a-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d sayısının faktöriyeli:%d ",x,faktoriyel(x));
    return 0;
}