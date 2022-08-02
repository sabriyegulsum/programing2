#include<stdio.h>
int f(int x[],int y)
{
    int s;
    if(y==0)
        return x[0];
    else
        s=f(x,y-1);
        printf("\n%d---%d  ",s,y);
        if(s>x[y])
            return s;
        else 
            return x[y];
}

int main()
{
    int x[6]={1,3,2,5,9,7};
   
    printf("please enter elements of array");
    f(x,6);
    return 0;
}