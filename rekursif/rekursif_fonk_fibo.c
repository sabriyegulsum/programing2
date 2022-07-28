#include <stdio.h>
int fibo(int x)
{
    if(x==0||x==1)
    {
       return 1;
    }
    return fibo(x-1)+fibo(x-2);
} 
int main(void)
{
    int n,i;
    printf("bir sayı giriniz: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("number %d= %d\n",i,fibo(i));
    }
    return 0;
}
    
    
