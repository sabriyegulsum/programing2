#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number=2010213051;
    int i=0,k;
    int *a;
    a=(int *)malloc(sizeof(int));
    while(number>0)
    {
        // int kalan deyip eğer kaln eşitse sıfır deyip dizinin içine sıfır atamıştım ama buna gerek yok çünkü zaten kalanı direk eşitleyebilirimmm
        *(a+i)=number%2;
        i++;
        number=number/2;
        a=(int *)realloc(a,(i+1)*sizeof(int));
    }

    for(k=i-1;k>=0;k--)
        printf("%d",*(a+k));
    return 0;
}