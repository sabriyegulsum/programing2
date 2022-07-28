#include<stdio.h>
int toplam(int x)
{
        if(x==1)
            return x;
        return x+toplam(x-1);
    
}
int main()
{
    int x=10;
    printf("%d",toplam(x)) ;
    return 0;
}