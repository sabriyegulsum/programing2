#include <stdio.h>
void bol(int bolunen,int bolen, int *bolum, int *kalan)
{
    *bolum=bolunen/bolen;
    *kalan=bolunen%bolen;
}
int main()
{
    int bolunen,bolen, bolum, kalan; //kalan ve bolum için & kulllanmana gerek yok çünkü ADRESİNİ FONKSİYONA GÖNDERECEKSİN!!!
    printf("bolunecek sayı:");
    scanf("%d",&bolunen);
    printf("\nbolecek sayı");
    scanf("%d",&bolen);
    bol(bolunen, bolen, &bolum, &kalan); //aaaa pointers olmasına rağmen neden * işareti yok dersen i think you'll fail :))
    printf("bolum=%d\nkalan=%d",bolum,kalan); //geri yazdırırken kalan  ve bölüm için * koymadık çunku bu pointer dediğimiz onların kendi değerini değiştirdi
    return 0;
}