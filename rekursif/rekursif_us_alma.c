#include <stdio.h>
int us_al(int x,int y)
{
   static int carpim=1;
    if(y==0)
        return carpim;
    else  
    {
        carpim*=x;
        return us_al(x,y-1);
    }   
} 
int main(void)
{
    int a,b;
    printf("taban sayısını girininz");
    scanf("%d",&a);
    printf("üs olacak sayıyı giriniz");
    scanf("%d",&b);
    printf("%d üssü %d= %d\n",a,b,us_al(a,b));
    return 0;
}