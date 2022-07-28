#include <stdio.h>
#include <stdlib.h>
//0 girilene kadar girilen rakamlari hafızaya en verimli kaydeden code
int main()
{
    int *p;
    p=(int *)malloc(sizeof(int));
    int i=0;
    printf("rakamlar giriniz durmak için sıfır");  //ve tabiki enter :))
    while(1)
    {
        scanf("%d",p+i);
        if(*(p+i)==0)
            break;
        i++;
        p=(int *)realloc(p,(i+1)*sizeof(int));//başına int yazmasak 
    }
    for(int j=0;j<i;j++)//burada tanuımlamayalım
        printf("%d",*(p+j));//tap
    return 0;

}
// şimdi canım sayı gir ve hafızaya ata demiş ya neden bir sayı alıp sürekli adres atamaya çalişiyosun
// hiç gerek yok direk pointeri dizi olarak kullanabilirsin ;)