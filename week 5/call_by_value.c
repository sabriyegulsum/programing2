#include<stdio.h>
void arttir(int x)
{
    x++;
}

int main()
{
    int i=5;
    printf("before %d\n",i);
    arttir(i);
    printf("after func:%d\n",i);
    getchar();
    return 0;
}