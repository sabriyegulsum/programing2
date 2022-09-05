#include <stdio.h>
int us_al(int x,int y)
{
    if(y==0)
        return 1;
    else
        return ((x)*us_al(x,y-1));
} 
int main(void)
{
    int a,b;
    printf("taban sayısını girininz");
    scanf("%d",&a);
    printf("üs olacak sayıyı giriniz");
    scanf("%d",&b);
    printf("%d^%d= %d\n",a,b,us_al(a,b));
    return 0;
}