#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int sayi,i,sum=0;
    char *name;
    int no=2010213051;
    name=(char *)malloc(7*sizeof(int));
    strcpy(name,"sabriye");
    sayi=no;
    while(no>0)
    {
        sayi=no%10;
        sum+=sayi;
        no=no/10;
    }
    name=realloc(name,sum*sizeof(int));
    i=7;
    sum-=7;       //unutma yeri eklemedin ogrenci nosu ile güncelledin:) o yuzden  dizinde zaten ilk kısım dolu :)
    while(sum>7)
    {
        for(int j=0;j<7;j++,i++)
            *(name+i)=*(name+j);
        sum-=7;

    }
    *(name+i)='\0';
    i=0;
    while(*(name+i)!='\0')
    {
        printf("%c",*(name+i));
        i++;
    }
    return 0;
}
