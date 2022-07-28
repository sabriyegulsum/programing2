#include<stdio.h>
int multi(int x,int y)
{
    if(y==0)
        return 0;
    if(y<0)
        return (-x)+multi(x,y+1);
    else
        return x+multi(x,y-1);
}
int main()
{
    int x,y;
    printf("Enter number for multiplication");
    scanf("%d%d",&x,&y);
    printf("%d",multi(x,y));
    return 0;
}