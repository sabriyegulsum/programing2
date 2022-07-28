//find prime numbers from 1 to N
#include<stdio.h>
int main()
{
    int i,j,n,a;
    printf("enter a number:");scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        a=0;
        //if a is 0 we write number but not dont write
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                a=1;
                break;
            } 
            
        }
        if(a==0)
            printf("%d\n",i);
    }
    return 0;
}