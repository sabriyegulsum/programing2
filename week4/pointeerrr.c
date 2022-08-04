#include <stdio.h>
int main()
{
    int a,*aptr;
    aptr=&a;
    *aptr=89;
    printf("%p",aptr); //adresi yazdırır
    printf("\n%d",aptr); //adresi yazdırır
    printf("\n%d",&a); //adress
    return 0;
}
// %p hexa decimal şeklinde yazdırıyor