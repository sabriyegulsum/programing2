// senin kocanın evi yok yaa unutma bir pointeri direk
//bir değere eşitleyemessin hafızada yeri yok ya malloc yaada daha
//önceden tanımladığın bir değere eşitleyebilirsin
#include<stdio.h>
int main()
{
    int *i;
    *i=5;
    printf("%d",*i);
    return 0;
}