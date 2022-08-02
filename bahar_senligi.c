#include<stdio.h>
int number( int x)
{
    int i=0;
    int y=x;
    while(y!=0)
    {
        y=y/10;
        i++;
    }
    return i;
}

int main()
{
    int x=0,b=0,c=0,d=0;
    int n=3,k=2,p;
    for(int a=1;a<=1500;a++)
    {   
        p=n;
        //printf("\n%d %ld %ld",a,n,k);
        if(number(p)>number(k))
        {
            x++;
            if(a<=100)
                b++;
            if(a<=500)
                c++;
            if(a<=1000)
                d++;
            //printf("\n%d %d %d",a,p,k);
        }
            
        p=n;
        n=(2*k)+n;
        k=k+p;
       
    }
    printf("\n\n***\nilk 100 de:%d\nilk 500 de:%d\nilk 1000 de:%d\nilk 1500 de:%d",b,c,d,x);
    
    return 0;
}