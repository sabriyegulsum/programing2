#include<stdio.h>
int f(int x)
{
    if(x==0)
        return 0;
    return f(x-1)+2;
    
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",f(x));
    return 0;

}