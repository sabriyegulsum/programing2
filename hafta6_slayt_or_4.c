#include <stdio.h>
#include<stdlib.h>
// stringin uzunluğunu adresini atarak yani pointerla bulan fonksiyon 
int uzunluk( char *a);
int main()
{
    char str[100];
    gets(str);
    printf("stringin uzunluğu:%d",uzunluk(str));  //stringimin sadece adını yazmam yeterli
    return 0;
}
int uzunluk (char *a) 
{
    int i=0;
    while(*(a+i)!='\0')
    i++;
    return i;
    // sonra sadece uzunluk döndürürsün
}