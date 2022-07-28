#include <stdio.h>
#include <stdlib.h>
void rectangle(int a,int b,int *area,int *perimeter)
{
    *area=a*b;
    *perimeter=2*(a+b);
}
int main()
{
    int a,b,alan,cevre;
    printf("dikdörtgenin kenar uzunluklarını giriniz");

    // %d %d yaparak entera bir kere basarak alabilirsin arada bir boşluk girerek yazman yeterli
    scanf("%d %d",&a, &b);
    rectangle(a,b,&alan,&cevre);
    printf("alan=%d\nçevre=%d",alan,cevre);
    return 0;
}