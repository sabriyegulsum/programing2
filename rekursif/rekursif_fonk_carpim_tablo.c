#include <stdio.h>
int tablo(int x)
{
    int i;
    if(x<=10)
    {
        for(i=1;i<11;i++)
            printf("%-3d",x*i);
        printf("\n");

        return tablo(x+1);
    }   
    else 
    return 0;//burada 0 da oluyor 1 de oluyor
}
int main(void)
{
    int a=1;
    tablo(a);
    return 0;
}