#include <stdio.h>
 int toplam(int x)
{
    static int top=0;
    if(x==0)
        return top;
    return (x+ toplam(x-1));
}
int main(void)
{
    int n;
    printf("bir sayı giriniz: ");
    scanf("%d",&n);
    printf("%d\n",toplam(n));
    return 0;
}