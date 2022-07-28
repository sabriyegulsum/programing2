#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char *p;
    int i=0,k;
    p=(char *)malloc(sizeof(char));
    while(1)
    {
        //scanf("%c",p+i); //scanfte pointer ise sadece adını yaz  & kullanma !!!
        *(p+i)=getchar();
        if(*(p+i)=='\n') //girdiğim değer
            break;
        putchar('*');
        i++;
        p=(char *)realloc(p,(i+1)*sizeof(char));
    }
        putchar('\n');
        for(k=0;k<i;k++)
            printf("%c",*(p+k));
    return 0;
}