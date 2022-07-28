#include<stdio.h>
int sum(int x[],int y)
{
    if(y==0)
        return 0;
    return x[y-1]+sum(x,y-1);
}
int main()
{
    int n[100],k;
    printf("please enter number of array:");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("%d",sum(n,k));
    return 0;
}