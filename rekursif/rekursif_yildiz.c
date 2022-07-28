#include <stdio.h>
int yildiz(int x)
{
    int i;
    if(x==0)
        return 0;
    for (i=x;i>=1;i--)
        printf("*");
        printf("\n");
    return yildiz(x-1);
    
    
}

int main()
{
    int a;
    printf("bir sayı giriniz");
    scanf("%d",&a);
    //printf("%d\n",yildiz(a));
    //printf le fonksiyonu çağirınca return deki sıfırıda yazdırıyo!!!
    yildiz(a);
    return 0;
}