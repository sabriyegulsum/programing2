#include <stdio.h>
//main de alınan sayının basamakları toplamını döndüren rekürsif fonksiyon
int basamak_toplam(int x)
{
    static int basamak ;
   

    if(x==0)
        return 0;
    else
    {
        basamak=x%10;

        return basamak+basamak_toplam(x/10);
    }
}
int main(void)
{
    int a;
    printf("bir sayi giriniz: ");
    scanf("%d",&a);
    printf("%d sayısının basamakları toplamı: %d dir\n",a,basamak_toplam(a));
    return 0;
}