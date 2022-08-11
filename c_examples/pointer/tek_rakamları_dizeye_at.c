#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *t,*c,no,i,j,sayi;
    no=2010213051;
    c=(int *)malloc(sizeof(int));
    t=(int*)malloc(sizeof(int));

    for(i=0,j=0;no!=0;)
    {
        sayi=no%10;
        if(sayi%2==0)
        {
            *(c+i)=sayi;
            i++;
            c=realloc(c,(i+1)*sizeof(int));
        }
            
        else
        {
            *(t+j)=sayi;
            j++;
            t=realloc(t,(j+1)*sizeof(int));
        }
        no=no/10;
    }
    for(int k=0;k<i;k++)
        printf("çift=%d",*(c+k));
    for(int l=0;l<j;l++)
        printf("\ntek=%d",t[l]);
    return 0;
}