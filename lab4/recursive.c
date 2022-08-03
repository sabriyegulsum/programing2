#include<stdio.h>
#include<stdlib.h>
int f(int *p,int x)
{
    if(x<0)
        return 0;
    if(*p%2!=0)
    {
        p++;
       return 1+f(p,x-1); 
    } 
    p++;
    return f(p,x-1); 
}
int main()
{
    int i,*p;
    printf("how many elements of array:");
    scanf("%d",&i);
    p=(int *)malloc(sizeof(int)*i);
    for(int j=0;j<i;j++)
    {
       scanf("%d",(p+j));
    }
    printf("the numbers of single elements in the array:%d",f(p,i));
    return 0;
}