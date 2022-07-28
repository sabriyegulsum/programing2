#include<stdio.h>
int toplam(int sayi)
{
    if(sayi==1)
        return sayi;
    return toplam(sayi-1)+sayi;
}
int main()
{
    int number;
    printf("1 den N sayısına kadar toplayan program");
    scanf("%d",&number);
    printf("%d",toplam(number));
    return 0;
}