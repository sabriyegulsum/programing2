#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    printf("rastgele sayılarınız:");
    printf("%s%13s%19s","sabriye","gülsüm","soylu");
    for(i=0;i<=20;i++)
    {
        printf("%10d",1+rand()%6);
    if(i%5==0)
        putchar('\n');
    
    }
    
    return 0;
}