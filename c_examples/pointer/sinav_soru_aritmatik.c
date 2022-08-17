#include<stdio.h>
int main()
{
    int A[10]={1,5,0,3,1,2,0,1,0,2};
    int *m,**k;
    m=A;
    printf("adress:%d\n",&A);
    printf("output 1: %d\n",*(m+1));
    *(m+2)+=3;
    m+=4;
    printf("output 2: %d\n",(m+1));
    m=&A[1];
    k=&m;
    printf("output 3: %d\n",*(*(k)+1));
    printf("output 4: %d\n",*k);
    m=m-1;
    printf("output 5: %d\n",*k);
    return 0;
}