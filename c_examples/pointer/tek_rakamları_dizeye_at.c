#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *t,*c,no,i,j,sayi;
    no=2010213051;
    c=(int *)malloc(i*sizeof(int));
    t=(int*)malloc(j*sizeof(int));

    for(i=0,j=0;no!=0;)
    {
        sayi=no%10;
        if(sayi%2==0)
        {
            *(c+i)=sayi;
            i++;
        }
            
        else
        {
            *(t+j)=sayi;
            j++;
        }
        no=no/10;
    }
    for(int k=0;k<i;k++)
        printf("çift=%d",*(c+k));
    for(int l=0;l<j;l++)
        printf("\ntek=%d",t[l]);
    return 0;
}