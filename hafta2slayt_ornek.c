#include <stdio.h>
int f(int x)
{
    if(x<=0)
    {
        return 0;
    }
    else
        return f(x-1)+2;
}
int main()
{
    int n;
    printf("bir sayı giriniz");
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}