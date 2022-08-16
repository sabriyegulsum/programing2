#include<stdio.h>
#include<stdlib.h>
int *ft(int dizit[],int x);
int *fc(int dizic[],int y);

int main()
{
    int *ptrt,i,*ptrc;
    int dizi[10]={2,0,1,0,2,1,3,0,5,1};
    ptrt=ft(dizi,10);
    ptrc=fc(dizi,10);
    for(i=0;*(ptrc+i)!=-1;i++)
        printf("%d",*(ptrt+i));
    printf("\n");
    for(i=0;*(ptrc+i)!=-1;i++)
        printf("%d",*(ptrc+i));
    return 0;
}
int *ft(int dizi[],int x)
{
    int i,*p,j=0;
    p=(int *)malloc(sizeof(int));
    for(i=0;i<x;i++)
    {
        if(dizi[i]%2!=0)
        {
            *(p+j)=dizi[i];
            j++;
            p=realloc(p,(j+2)*sizeof(int));
        }
    }
    *(p+j)=-1;
    return p;
}
int *fc(int dizi[],int x)
{
    int i,j=0,*p;
    p=(int *)malloc(sizeof(int));
    for(i=0;i<x;i++)
    {
        if(dizi[i]%2==0)
        {
            *(p+j)=dizi[i];
            j++;
            p=realloc(p,(j+2)*sizeof(int));
        }
    }
    *(p+j)=-1;
    return p;
}