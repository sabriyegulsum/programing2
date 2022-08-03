// write a program in c to add two number using pointers
#include<stdio.h>
#include<stdlib.h>
int  sum( int *x)
{
    int sum=0;
   scanf("%d",x);
   sum+=*x;
   scanf("%d",x);
   sum+=*x;
   return sum;

}
int main()
{
    int *x;
    printf("please enter two number for adding:");
    x=(int *)malloc(sizeof(int ));
    printf("%d",sum(x));
    return 0;
}