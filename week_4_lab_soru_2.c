#include <stdio.h>
int main()
{
    int a,b,*aptr,*bptr;

    aptr=&a;
    bptr=&b;
    printf("iki sayi giriniz:");
    scanf("%d%d",&a,&b);
    *aptr=*aptr+*bptr;
    printf("sayıların toplamı=%d\n",*aptr);
    return 0;


}