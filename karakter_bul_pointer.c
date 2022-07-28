#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bul(char *,char*);
int main()
{
    char a[100];
    char i;
    int sonuc;
    printf("bir şeyler yazınız");
    //stingi gets ile al boşu boşuna başını belaya sokma :(
    gets(a);
    printf("\naranmasını istediğiniz harfi giriniz");
    i=getchar();
    sonuc=bul(a,&i);
    if (sonuc!=0)
    printf("aranılan karakter strintgde %d tane vardır",bul(a,&i));   
    else
        printf("aradığınız değer bulunamamıştır");
    
    return 0;
}
int bul(char *a,char *b)
{
    int i=0,c=0; 
    while(*(a+i)!='\0')
    {
        if(*(a+i)==*b)
            c++;

        i++;
        
    }
    
    return c;
}