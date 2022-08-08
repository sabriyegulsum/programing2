#include<stdio.h>
#include<stdlib.h>
// fonksiyondan direk pointer aldığın zaman normal bir variable olarak
//tanımlar ve adres gönderirsin yada pointer belirler malloctan hafızada
//yerini ayırıp gönderirsin
int bolme(int ,int ,int *);
int main()
{
    int bolunen,bolen,*kalan,bolum;
    kalan=(int *)malloc(sizeof(int));
    printf("bölüncek sayıyı girininiz");
    scanf("%d",&bolunen);
    printf("bolecek sayıyı giriniz");
    scanf("%d",&bolen);
    printf("\nbolum=%d\n",bolme(bolunen,bolen,kalan));
    printf("kalan=%d",*kalan);
    return 0;
}

int bolme(int bolunen,int bolen, int *kalan)
{
    int bolum,mod;
    bolum=bolunen/bolen;
    *kalan=bolunen%bolen;
    return bolum;
}