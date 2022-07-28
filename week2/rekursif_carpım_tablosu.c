#include <stdio.h>
int tablo(int x)
{
    if(x<=10)
    {
        for(int i=1;i<11;i++)
            printf("%-3d",x*i); 
        printf("\n");
    return (tablo(x+1));
    }
    else
        return 0;
}
int main()
{
    int a=1;
    tablo(a);
    return 0;
}