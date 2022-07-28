#include <stdio.h>
#include <stdlib.h>
int  *birlestir(int [],int,int [], int );
int main()
{
    int i;
    int p1[2]={1,3};
    int p2[3]={2,4,6};
    int *ptr;

    ptr=birlestir(p1,2,p2,3);
    for (i=0;i<5;i++)
    {
        printf("%d",*(ptr+i));
        printf("\n");
    }
    
    return 0;
}
int  * birlestir(int a[],int b,int c[], int d)
{
    int i;
    int *ptr=(int*)calloc(b+d,sizeof(int));
    int *aptr=a;
    int *cptr=c;
    for(i=0;i<b+d;i++)
    {
        for(int j=0;j<=b+d;j++)
            {
                 if(aptr[i]<cptr[j])
                {
                    ptr[i]= aptr[i];
                }
                else
                    ptr[i]= cptr[j];
            }
       
    }
   return ptr;
}
