#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i;
    ptr=malloc(10*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    for( i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    
   // free(ptr);
    printf("%d",ptr[3]);
    return 0;

}