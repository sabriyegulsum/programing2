#include <stdio.h>
#include <stdlib.h>
int main()
{
    iptr=(int *)malloc(sizeof(int));
    printf("%d",iptr);
    return 0;
}