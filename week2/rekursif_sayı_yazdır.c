#include <stdio.h>
int f(int);
int toplam(int);
int main()
{
    int a=10;
    f(a);
    printf("toplam = %d",toplam(a));
    return 0;
}
int f(int n)
{
    if(n==0)
        return 0;
    
    f(n-1);
    printf("%d\n",n);
}   
int toplam(int m)
{
    
    if(m==1)
        return m;
    else
    return(m+toplam(m-1)); 
}