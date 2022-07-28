//1 den N e kadar olan sayıların toplamı rekürsif fonksiyonla yazımı
#include <stdio.h>
int toplam(int x)
{
    if(x==1)
    {
        return x;
    }
    return (toplam(x-1)+x);
}
int main(void)
{
    int n;
    int y;
    printf("bir sayı giriniz: ");
    scanf("%d",&n);
    printf("%d",toplam(n));
    return 0;
}