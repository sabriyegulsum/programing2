#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    int A[100];
    int B[10]={0};
    srand(time(NULL));
    for(i=0;i<100;i++)
        A[i]=rand()%10;
    for(i=0;i<100;i++)
        B[A[i]]++;
    for(i=0;i<10;i++)
        printf("%d=%d\n",i,B[i]);
    
    return 0;
}