#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p;
    p=(char *)malloc(7*sizeof(char));
    *p="sabriye";
    p=realloc(p,18*sizeof(char));
    *p="sabriyegülsümsoylu";
    puts(*p);
    return 0;
}