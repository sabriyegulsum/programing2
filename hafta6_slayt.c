#include <stdio.h>
#include <stdlib.h>
//iki değişkenin değerini yer değiştiren fonksiyon 
//normalde fonksiyonla değişkende değişiklik yapamazsın ama pointerla adresini gönderirsen artık güç sendeeee :))) 
void swap(int *,int *);
int main()
{
    int a=2,b=4;
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    return 0;
} 
void swap(int *a,int *b)
{
    int gecici;
    gecici=*a;
    *a=*b;
    *b=gecici;
}