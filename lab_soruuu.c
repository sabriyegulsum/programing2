#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *isim;
    isim=(char *)malloc(7*sizeof(char));
    strcpy(isim,"sabriye");
    isim=(char *)realloc(isim,12*sizeof(char));
    strcpy(isim,"sabriyesoylu");
    printf("%s",isim);
    return 0;
}