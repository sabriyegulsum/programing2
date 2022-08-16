#include<stdio.h>
#include<stdlib.h>
int *f(int dizi[],int a)
{
    int *ptr,i,j=0;
    ptr=(int *)malloc(sizeof(int));
    for(i=0;i<a;i++)
    {
        if(dizi[i]%2!=0)
        {
            *(ptr+j)=dizi[i];
            j++;
            ptr=realloc(ptr,(j+1)*sizeof(int));
        }
    }

    *(ptr+j)=-1;

    return ptr;
}
int main()
{
    int *p,i;
    int dizi[10]={2,0,1,0,2,1,3,0,5,1};
    p=f(dizi,10);
    for(i=0;*(p+i)!=-1;i++)
        printf("%d",*(p+i));
    return 0;
}