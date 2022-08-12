#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(char *x, char *y)
{
    while(*x!='\0' && *y!='\0' && *x == *y)
    {
        x++;
        y++;
    }
    return *x-*y;
        
}
int main()
{
    char metin[100],kelime[100],temp[100];
    int i,a=1;
    static int j=0;
    printf("cümleyi giriniz");
    gets(metin);
    printf("aranacak kelimeyi giriniz");
    gets(kelime);
    while(metin[j]!='\0')
    {


        for(i=0;metin[j]!=' ' && metin[j]!='\0';i++,j++)
        {
            temp[i]=metin[j];
        }
       
        temp[i]='\0';
        // temp dizimin sonunu null a eşitlemezxsem kod burada patlıyor

        if(cmp(temp,kelime)==0)
        {
            a=0;
            printf("kelime bulunmuştur");
            break;
        }
        j++;
        if(a==0)
            break;
    }
    if(a==1)
        printf("kelime bulunamıştır ");

    return 0;
}
