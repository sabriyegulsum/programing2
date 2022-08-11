#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j;
    char metin1[100],metin2[100];
    printf("birinci kelimeyi giriniz:");
    scanf("%s",metin1);
    printf("ikinci metni giriniz");
    scanf("%s",metin2);
    i=strcmp(metin1,metin2);
    if(i==0)
        printf("bu kelimeler aynıdır");
    else
    {
        i=strlen(metin1);
        j=strlen(metin2);
        if(i>j)
            printf("metin1 kelime olarak daha uzundur");
        else if(i==j)
            printf("bu kelimeler eşittir");
        else
            printf("metin2 daha uzundur");
    }
    return 0;
}