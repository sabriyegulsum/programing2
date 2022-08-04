#include<stdio.h>
int main()
{
    int elm;
    int month[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *ptr;
    ptr=month;
    elm=ptr[3];
    printf("elm:%d\n",elm);
    ptr=month+3;
    printf("*ptr:%d\n",*(ptr+5));
    ptr=&month[3];
    printf("*ptr:%d\n",*ptr);
    elm=(ptr+2)[2];
    printf("elm:.%d\n",elm);
    elm=*(month+1);
    printf("elm:%d\n",elm);
    return 0;
}