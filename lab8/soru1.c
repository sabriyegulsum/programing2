#include<stdio.h>
int main()
{
    enum{
        a=1,
        b,
        c,
        d
    };
    //a=10;
    printf("%d",a*b*d);
    return 0;
}
//enum değereli sabittir asla değiştilemez