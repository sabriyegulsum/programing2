#include<stdio.h>
int hesapla(int sayi[],int a,int not)
{
    int i,k=0,toplam=0,ort;
    for(i=0;i<a;i++)
    {
        scanf("%d",&sayi[i]);
        toplam+=sayi[i];
        if(sayi[i]<not)
            k++;
    }
    ort=toplam/a;
    printf("ortalama:%d\n",ort);
    
    return k;
}
int main()
{
    int dizi[100];
    int number,gecme;
    printf("Öğrenci sayısını giriniz");
    scanf("%d",&number);
    printf("Geçme notunu giriniz");
    scanf("%d",&gecme);
    printf("kalan öğrenci sayısı:%d",hesapla(dizi,number,gecme));
    return 0;
}
