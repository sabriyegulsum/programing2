#include <stdio.h>
#include <stdlib.h>

int main()
{
    int top=15;
    int i;
    char *isim;
    char a[8]="sabriye";
    isim=(char *)malloc(8*sizeof(char));
    for(i=0;i<8;i++)
    {
        //ne güzel aldım ismi :))
        //her harfini ayrı ayrı atadım
        *(isim+i)=a[i];
    }
    printf("%s\n",isim);
    isim=(char *)realloc(isim,15*sizeof(char));
    top-=7;
    i=7;
    while(top>7)
    {
       for(int j=0;j<7;j++)
            *(isim+j+i)=*(a+j);
        i+=7;
        top-=7;
    }




   printf("%s",isim);

    return 0;
}