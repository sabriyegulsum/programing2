//calculate the sum of all numbers given in the main function using a recursive function
#include<stdio.h>
int sum(int x[],int y)
{
    if(y==1)
        return x[0];
    else
        return x[y-1]+sum(x,y-1);

}


int main()
{
    int a,x[100];
    printf("how many numbers do you want to sum?");
    scanf("%d",&a);
    printf("please enter elements of array:");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("sum:%d",sum(x,a));
    return 0;
}