//burada fonksiyonu i ile 10 kere çağırıyoruz.i=0 olduğunda hemen return 1 döndürüyo
#include <stdio.h>
int fakt(int x)
{
    if(x<=1)
    {
        //faktöriyelde iki tane bilinen durum var onlar 0!=1 ve 1!=1 olmasıdır 
        //o yüzden hemen onlarla if durumu oluşturdum
        return 1;
    }
    else
    return(x*fakt(x-1));
}
int main(void)
{
    int i;
    
    for(i=0;i<=10;i++)
    {
        printf("%d!=%d\n",i,fakt(i));
    }
    return 0;
}