#include <stdio.h>
//bolme işlemini çıkarma ile yapan rekürsif fonksiyon
int bolme(int x,int y)
{
    static int sayac=0;
    if(x<y)
        return sayac;
    else 
        {
            sayac++; 
            return bolme(x-y,y);
        }
}
int main(void)
{
    int x,y;
    printf("bölünecek sayıyı giriniz:");
    scanf("%d",&x);
    printf("bölecek olan sayıyı giriniz:");
    scanf("%d",&y);
    printf("%d",bolme(x,y));
    return 0;
}