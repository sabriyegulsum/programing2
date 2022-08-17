#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int A[20],B[10]={0};
    for(i=0;i<20;i++)
    {
        A[i]=rand()%10;
        printf("%d\n",A[i]);
        B[A[i]]++;
    }
    for(i=0;i<10;i++)
        printf("sayi %d: %d\n",i,B[i]);
        
    return 0;
}  
// may be one day you can do what you want :))dream my dream 