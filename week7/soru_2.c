#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,j=0,a;
    char metin[100],kelime[10];
    printf("metni giriniz");
    gets(metin);
    printf("kelimeyi giriniz");
    gets(kelime);
    for(i=0;metin[i];i++)
    {
        for(j=0;kelime[j];j++)
        {
            a=1;
            if(*(metin+i+j)!=*(kelime+j))
            {
                a=0;
                break;
            }
        }
        if(a==1)
        {
            printf("kelime bulunmuştır %d",i);
            break;
        }
            
        
    }
    if(a==0)
        printf("kelime bulunamamıştır"); 
    
    return 0;

}