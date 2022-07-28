#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[10]={7,3,0,6,0,2,0,1,8,1};
    int *m,**k;
    m=A;
    printf("Output 1  %d\n",*(m+1));


    *(m+2) += 3;
    m += 4;
    printf("Output 2: %d\n", (m+1));

    m=&A[1];
    k=&m;
    printf("Output 3: %d\n",*(*(k)+1));

    printf("Output 4: %d\n", *k);

    m=m-1;
    printf("Output 5: %d\n",*k);
    return 0;
}