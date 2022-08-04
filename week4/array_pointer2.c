#include<stdio.h>
int main()
{
    int i[10],j;
    int *iptr;
    for(j=0;j<10;j++)
    {
        *(i+j)=j;
    }
    iptr=i;
    for(j=0;j<10;j++)
    {
        printf("\n*(iptr+%d)=%d",j,*iptr);
        iptr++;
    }
    //iptr artık dizinin başını göstermez
    printf("\n%d",*(iptr-1));
    iptr=i;
    for(j=0;j<10;j++)
        printf("\n%d",*(iptr+j));
    //iptr hala dizinin başını gösterir
    printf("\n%d",*iptr);
    return 0;
}