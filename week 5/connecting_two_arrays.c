#include<stdio.h>
#include<stdlib.h>
int * connect_array(int *x,int size1,int *y,int size2)
{
    int i=0,k=0;
    int *result=(int *)malloc(size1+size2*sizeof(int));
    for(i=0;i<size1;i++)
        *(result+i)=*(x+i);
    for(k=0;k<size2;k++)
    {
        *(result+i)=*(y+k);
        i++;
    }
    return result;
}
int main()
{
    int i;
    int array_1[5]={6,7,8,9,10};
    int array_2[7]={13,7,12,9,7,1,14};
    //return result we need pointer
    int *p;
    p=connect_array(array_1,5,array_2,7);
    for(i=0;i<12;i++)
        printf("\n%d",*(p+i));
    return 0;
}
