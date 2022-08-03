//write a program in c to swap elements using call by referance 
#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    printf("before changing--->  x=%d   y=%d\n",*x,*y);
    int q;
    q=*x;
    *x=*y;
    *y=q;
    printf("after changing---->x=%d   y=%d",*x,*y);
}
int main()
{
    int *x,*y;
    x=(int *)malloc(sizeof(int));
    y=(int *)malloc((sizeof(int)));
    printf("enter two number for swap:");
    scanf("%d",x);
    scanf("%d",y);
    swap(x,y);
    return 0;
}