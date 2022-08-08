// pointere ilk önce değer eşitleyemezsin ilk önde adres ataman lazım malloc kullanmıyorsan
#include<stdio.h>
void arttir(int * x)
{
    (*x)++;
}
int main()
{
    int *i,j=5;
    i=&j; // olayımız bu :)) or malloc 
    printf("before %d\n",*i);
    arttir(i);
    printf("After func %d\n",*i);
    return 0;
}