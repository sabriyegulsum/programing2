#include<stdio.h>
void table(int x)
{
    int i;
    if(x<=10)
    {
        table(x+1);
        for(i=1;i<11;i++)
            printf("%3d",x*i);
        printf("\n");
        
    }
    //if you write return ,can't write under (printf)
}
int main()
{
    int x=1;
    table(x);
    return 0;
}