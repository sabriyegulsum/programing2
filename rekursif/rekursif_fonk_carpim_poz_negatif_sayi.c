#include <stdio.h>
int carpma(int x, int y)
{
    if(y==0)
        return 0;
    if(y<0)
        return (-x)+carpma(x,y+1);
    return x+carpma(x,y-1);
}
int main(void)
{
    int a,b;
    printf("çarpılacak sayıları giriniz\n");
    scanf("%d%d",&a,&b);
    printf("%d",carpma(a,b));
    return 0;
}