#include<stdio.h>
int divide(int x,int y)
{
    if(x==0)
        return 0;
    else if(x<0)
        return -1;
    else 
        return 1+divide(x-y,y);
}
int main()
{
    int x,y;
    printf("enter number for dividing");
    scanf("%d%d",&x,&y);
    printf("%d",divide(x,y));
    return 0;
}