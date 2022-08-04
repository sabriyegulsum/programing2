
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=3,*iptr;
    iptr=&i;
    (*iptr)+=5;
    printf("%d",i);
    printf("adres=%d",iptr);
    iptr++;
    printf("\ni=%d",iptr);
    return 0;
} 