#include <stdio.h>
void fun(int n)
{
    int i;
    if(n>1)
    
        fun(n-1);
        printf("\n");
    

    for(i=0;i<n;i++)
        printf(" * ");
}
int main()
{
    fun(5);
    return 0;
}