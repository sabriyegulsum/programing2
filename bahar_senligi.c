#include<stdio.h>
int number( int x)
{
    int i=0;
    int y=x;
    while(y!=0)//>0
    {
        y=y/10;
        i++;
    }
    return i;
}

int main()
{
    int x=0;
    int n=3,k=2,p;
    for(int a=1;a<=1500;a++)
    {   
        p=n;
        //printf("\n%d %ld %ld",a,n,k);
        if(number(p)>number(k))
        {
            x++;
            printf("\n%d %d %d",a,p,k);
        }
            
        p=n;
        n=(2*k)+n;
        k=k+p;
       
    }
    printf("\n\n***\n%d",x);
    
    return 0;
}
