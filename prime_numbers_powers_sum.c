#include<stdio.h>
int f( int x)
{
    for( int i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return 0;
    }
        return x;
}
int main()
{

    long int p;
    int n=0,i,j,k;
    for( i=2;i<100;i++)
    {
        if(f(i)==0)
            continue;
        for( j=2;j<100;j++)
        {
            if(f(j)==0)
                continue;
            for( k=2;k<100;k++)
            {
                if(f(k)==0)
                    continue;
                p=(i*i)+(j*j*j)+(k*k*k*k);
                if(p>=10000000 && p<=100000000)
                {
                    //printf("\n%d %d %d %5ld",i,j,k,p);
                    n++;
                }
                 
            }
        }
    }
   
    printf("\n\n%d",n);
    return 0;
}