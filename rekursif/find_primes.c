//entered number prime or not
#include<stdio.h>
int prime(int x,int y)
{
    if(y==1)
    {
        printf("the number is prime");
        return 0;
    }
    else if(x%y==0)
    {
        printf("the number is not prime");
        return 0;
    }
    else
        return prime(x,y-1);
}
int main()
{
    int a;
    printf("please enter a number:");
    scanf("%d",&a);
    prime(a,a-1);
    //dont put (a,a) ..always be not prime
    return 0;
}