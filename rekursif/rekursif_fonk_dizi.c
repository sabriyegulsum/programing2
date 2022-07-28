//eğer dizide ki değişkenleri static yapmazsan sıfırda kalırsın 0 alırsın :)
//rekürsifde static çok önemli çünkü fonksiyonunu her çağırdığında değişkenin en başa döner
#include <stdio.h>
int en_buyuk(int x[],int y)
{
    static int max=0;
    if(y<0)
    {
        return max;
    }
    else
    {
        if(x[y-1]>max)
            max=x[y-1];
        return en_buyuk(x,y-1);
    }
}
int main(void)
{
    int i,n;
    printf("dizinin eleman sayısını giriniz: \n");
    scanf("%d",&n);
    int a[n];
    printf("dizi elelmanlarını giriniz: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("dizideki en buyuk eleman: %d\n",en_buyuk(a,n));
    return 0;
}