#include <stdio.h>
int main()
{
    int a,*aptr;
    aptr=&a;
    *aptr=89;
    printf("%p",aptr); //adresi yazdırır
    printf("\n%d",aptr); //adresi yazdırır
    printf("\n%d",&a); //adress
    getchar();// ekranda konsolun yazılarunu
    return 0;
}
// %p hexa decimal şeklinde yazdırıyor