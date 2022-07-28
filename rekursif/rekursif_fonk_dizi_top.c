#include <stdio.h>
int dizi_top(int x[],int y)// diziyi fonksiyona parametre olarak gönderme şekli
{
    static int toplam=0; 
    // static olması gerekiyo yoksa her return dedğinde sıfırdan alır

    if(y<0)
    {
        return toplam;
    }
    else
       toplam+=x[y];
// dizinin son elemanından başladığımda ilk elemanını iki kere topluyor
    return dizi_top(x,y-1);
    
 }   
int main(void)
{
    int n,i;
    printf("dizinin eleman sayısını giriniz: ");
    scanf("%d",&n);
    int a[n];
    printf("dizinin elemanlarını giriniz:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("dizinin elemanlarının toplamı= %d",dizi_top(a,n));
    return 0;
}