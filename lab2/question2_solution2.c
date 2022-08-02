#include<stdio.h>
int f(int x[],int y)
{
    static int  max=0;
    if(y<0)
        return max;
    else
    {
        if(max<x[y])
            max=x[y];
        return f(x,y-1);
    }
}

int main()
{
    int x[10],i;
    for(i=0;i<10;i++)
        scanf("%d",&x[i]);
    printf("%d",f(x,9));
    return 0;
}