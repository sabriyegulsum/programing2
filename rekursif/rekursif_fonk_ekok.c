#include <stdio.h>
//ebob bulurken ikinci sayı ve ikisinin modu döndürülür
//ekokda iki sayının çarpımının eboblarına bölünmesidir
int ebob(int x,int y)
{
    if(y==0)
        return x;
    else
        return ebob(y,x%y);
}
int ekok(int x,int y)
{
    return (x*y)/ebob(x,y);
}
int main(void)
{
    int a,b;
    printf("iki sayı giriniz:");
    scanf("%d%d",&a,&b);
    printf("ekok=%d\n",ekok(a,b));
    printf("ebob=%d\n",ebob(a,b));
    return 0;
}