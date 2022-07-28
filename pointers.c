#include <stdio.h>
int main(void)
{
    int a;
    int *aptr=&a;
    *aptr=123;
    printf("%d",*aptr);
    return 0;
}
