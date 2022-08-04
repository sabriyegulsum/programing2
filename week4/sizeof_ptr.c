#include<stdio.h>
int main()
{
    char  i,*iptr;
    iptr=&i;
    printf("sizeof i=%d\n",sizeof(i));
    printf("sizeof iptr=%d",sizeof(iptr));
    return 0;
}
// sizeof ptr is fixed :)