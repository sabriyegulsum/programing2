#include <stdio.h>
#include <stdlib.h>

char *ara (char *,char );
//hoca return de char döndür demiş peki bu ne demek 

//sadece return döndüreceğin ifade bir pointerin ismi bu adar basit ok
int main()
{
    char *sonuc;
    char aranan;
    char str[100];
    printf("bir şeyler yazınız");
    // scanf string & kullanmaz çünkü onun adı her şeyi söyler
    gets(str);
    printf("aranacak olan harfi giriniz\n");
    aranan=getchar();
    printf("aranan:%c",aranan); 
    printf("aranan :%d",aranan); //ascii tablosundaki numarasını bastım

    sonuc=ara(str,aranan);   //fonksiyonumu çağırdım
    if(sonuc==NULL)
        printf("karakter bulunamadı");

    else    
        printf("karakter bulundu\n");

    
return 0;
}
char *ara(char *p,char q)
{

    while(*p!='\0') //olmadığı sürece devam et
    {
        if(*p==q)
           return p;
        p++;  //adresi arttırıyorum
        
    }
    if(q=='\0')
        return p;
       
    return NULL;
}