#include <stdio.h>
int main()
{
    int a,*aptr;
    aptr=&a;
    *aptr=89;
    printf("%p",aptr);
    printf("\n%d",aptr);
    printf("\n%p",&a);
    return 0;
}