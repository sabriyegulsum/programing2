#include <stdio.h>

int en_buyuk(int x[],int y)
{
    static int max=0;  //  !!!static tanımlamazsan her seferinde ilk değerine döner!!!
    if(y<0)
        return max;
    if(x[y-1]>max)
    {
        max=x[y-1];
        return en_buyuk(x,y-1);
    }
}
int main(void)
{
    int a[10],i;
    printf("dizinin elemanlarını giriniz:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("dizini en büyük elemanı: %d",en_buyuk(a,10));
    return 0;

}
