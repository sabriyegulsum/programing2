#include<stdio.h>
#include<stdlib.h>
int main()
{
    char metin[100],kelime[10];
    int i=0,j,a;
    printf("cümleyi giriniz:");
    gets(metin);
    printf("kelimeyi giriniz");
    gets(kelime);
    for(i=0;metin[i];i++)
    { 
        a=1;
        for(j=0;j<kelime[j];j++)
        {
           
            if(*(metin+i+j)==*(kelime+j))
            {
                a=0;
            }
            else
                a=1;
        }
        if(a==0)
        {
            printf("kelime bulunmuştur");
            break;
        }
    }
    if(a==1)
    printf("kelime bulunamamıştır");

    return 0;
}