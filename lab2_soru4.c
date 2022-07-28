#include <stdio.h>
int ebob(int x,int y)
{
    if(y==0)
        return x;
    else
        return ebob(y,x%y);
}
int main(void)
{
    int a,b;
    printf("iki sayı giriniz: ");
    scanf("%d%d",&a,&b);
    printf("%dve %d sayılarının ebobu= %d",a,b,ebob(a,b));
    return 0;
}