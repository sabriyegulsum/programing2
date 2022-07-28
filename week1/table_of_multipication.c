#include <stdio.h>
#define N 10
void header_of_table(void);
void multipication (int);
int power(int,int);
int main()
{
    header_of_table();
    multipication(N);
    return 0;
}
void header_of_table(void)
{
    printf("<<<<< TABLE OF MULTIPICATION >>>>>\n");
}
void multipication (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        
            if(j==1)
                printf("%1d",power(i,j));
            else
                printf("%9d",power(i,j));
        
        putchar('\n');
    }
}
int power(int m,int n)
{
    int product=1,i;
    for(i=1;i<=n;i++)
        product*=m;
    return product;
}