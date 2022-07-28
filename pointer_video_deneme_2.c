#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*har *p="sabriye";
    printf("%s\n",p);
    printf("%c",*(p+2));*/

    // %s ile yazdır tüm stringi yazdır printflede oluyo şapşik :)))
    //dizi değil dizinin bir elemanını yazdırırken düşün ki bir değişken değerini yazdırıyorsun pointerla bu yüzden (*) işareti kullanılır 

    /*char *sehir="manisa";
    printf("%s\n",sehir);
    printf("%c",*(sehir+3));// cannımmm eleman yazıyosun unutma ;)
    //şimdi döngüyle şeyapalım 
    for(; *sehir!=NULL;sehir++) //adresi arttırıyorum her seferinde aslında her seferinde pointerimin ilk adresi gibi olyor :-)
        printf("\n%c",*sehir); direk büyük harflerle null yazabilirsin*/
        

        char *sehirler[]={"ankara","antalya","izmir"}; //stringi boyutlu tanımladım yani üç ayrı blok
        printf("%s",*(sehirler+1)); //ama bastırıken her birini ayrı alıyor

    return 0;

}