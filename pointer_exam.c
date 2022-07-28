#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *isim;
    int i=0;
    isim=(char *)malloc(i*sizeof(char));
    printf("isminizi bazı harfleri tekrarlayacak şekilde giriniz");
    //eğer istesen pointerda %s deyip string alabilirsin ve sonra onun elemanlarına %c ile pointeri arttira arttira ulaşırsin :)) 
    scanf("%s",isim);
    printf("%s\n",isim);

    while(*(isim+i)!='\0')
    { 
        if(*(isim+i)!=*(isim+1+i))
        printf("%c",*(isim+i));
        i++;
       isim=(char *)realloc(isim,(i+1)*sizeof(char));
    }
    return 0;
}