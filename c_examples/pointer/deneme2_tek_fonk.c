#include<stdio.h>
#include<stdlib.h>
void f(int *x,int *y,int dizi[],int a)
{
    int i,j=0,k=0;
    for(i=0;i<a;i++)
    {
        if(dizi[i]%2==0)
        {
            *(y+j)=dizi[i];
            j++;
            y=realloc(y,(j+1)*sizeof(int));
        }
        else
        {
            *(x+k)=dizi[i];
            k++;
            x=realloc(x,(k+1)*sizeof(int));
        }
    }
    *(y+j)=-1;
    *(x+k)=-1;
    
}
int main()
{
    int dizi[10]={2,0,1,0,2,1,3,0,5,1};
    int *p,*pp,i;
    p=(int *)malloc(sizeof(int));
    pp=(int *)malloc(sizeof(int));
    f(p,pp,dizi,10);
    
    for(i=0;*(p+i)!=-1;i++)
        printf("%d ",*(p+i));
    
    printf("\n\n");

    for(i=0;*(pp+i)!=-1;i++)
        printf("%d ",*(pp+i));
    
    return 0;
}