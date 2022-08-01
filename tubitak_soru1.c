
#include<stdio.h>
long int fact( long int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}

int main()
{
    long int sum;
    long int x, number, q;
    for(x=145;x<=1000000;x++)
    {
        sum=0;
       
        number=x;
        
        while(number!=0)
        {
            q=number%10;
            sum+=fact(q);
            number=number/10;
        }   
        if(sum==x)
            printf("\n%ld\n",x);
    }
    return 0;
}
//tubitak example
//the number which is its sum of factorial of number  equal itself.