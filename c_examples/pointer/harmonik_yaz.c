#include<stdio.h>
double h(double x);
int main()
{
    double n;
    double sum;
    printf("dizi sayi:");
    scanf("%lf",&n);
    sum=h(n);
    printf("sum: %lf",sum);
    return 0;
}
double h(double x)
{
    double k;
    if(x==0)
        return 0.0;
    else
    {
        printf("\n%.1lf.adım",x);
        printf("%lf",(1/(1+(x-1))));
        k = (1/(1+(x-1)));
        return k + h(x-1);
    }
}