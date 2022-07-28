#include <stdio.h>
int main()
{
    int a=10;
    int *aptr=&a;
    int **bptr=&aptr;
    printf("%d\n",a);
    printf("%d\n",*aptr);
    printf("%d\n",**bptr);
    printf("%p ve %p ayni şey\n",aptr,*bptr);
    printf("%p ve %p aynı adresi verir birinci pointerin adresi",&aptr,bptr);
    // adres yazdıracaksan %p kullanman gerekiyor
    return 0;

}