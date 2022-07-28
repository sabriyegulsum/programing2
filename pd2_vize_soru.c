#include <stdio.h>
float harmonik(int n)
{
    float sum=0.0;
    if(n==0)
        return 0;
    else
    {
        sum=(float)1/n;
        printf("%d=%f\n",n,sum);
        return(sum+harmonik(n-1));
    }
}
int main()
{
    int x;
    printf("harmonik dizi için eleman sayısını giriniz");
    scanf("%d",&x);
    printf("%f",harmonik(x));
    return 0;
}
