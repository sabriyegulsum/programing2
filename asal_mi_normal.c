#include <stdio.h>
int main (void)
{
    int x,sayi,sayac=0;
    scanf("%d",&x);
    for(int i=2;i<x;i++)
    {
        
        sayi=x%i;
        if(sayi==0)
            sayac++;
    }
    if(sayac==0)
            printf("bu sayı asaldır");
        
    else
        printf("bu sayı asal değildir");
    return 0; 
}