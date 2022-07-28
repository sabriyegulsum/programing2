#include <stdio.h>
#include <stdlib.h>
int f(int, int *,int **);
int main()
{
    int c, *b, **a;
    c=4;
    b=&c;
    a=&b;
    printf("%d",f(c,b,a));
    return 0;
}

int f(int x,int *py, int **ppz)
{
    **ppz+=1; //adresle beraber x in değeri değişti
    x=*py * **ppz; // burada x in gerçek değeri değişmez call by value vardır
    *py*=2; // burada yine  x in kendi değeri değişir
    x*= *py+3; //burada sadece parametrenin değeri değişir
    //return (x+*py+**ppz);
    return (x);
}