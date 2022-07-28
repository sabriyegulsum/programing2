#include <stdio.h>
int main ()
{
    double d=2.24;
    double *dptr=&d;
    int a=10;
    int *p=&a;
    char b='a';
    char *pb=&b;
    float f=1.2;
    float *fptr=&f;
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(fptr));
    printf("%lu",sizeof(*pb));
    printf("\naney%lu\n",sizeof(pb));
    printf("%lu",sizeof(p));
    printf("\n%lu\n",sizeof(*p));
    printf("%lu\n",sizeof(dptr));
    printf("%lu",sizeof(d));
    getchar();

    return 0;
}