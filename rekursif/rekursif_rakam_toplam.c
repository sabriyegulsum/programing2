#include <stdio.h>
int sum(int x)
{
    if(x!=0)
    {
        return (x%10+sum(x/10));
        //bilinen sayının son rakamı %10 ile bulurum
        //bilinmeyen sayının bir önceki rakamı onun için sayı/10 u atarım bir sonraki adıma
    }
    else
        return 0;
}
int main()
{
    int a;
    printf("bir sayı giriniz:");
    scanf("%d",&a);
    printf("girilen sayının rakamları toplamı=%d\n",sum(a));
    return 0;
}