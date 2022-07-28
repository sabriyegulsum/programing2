#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *isim;
    int a=0;
    //isim=(char *)malloc(a*sizeof(char));
    printf("adınızı giriniz");
    //scanf("%s",isim);
    gets(isim);
    puts(isim);
    /*for(int i=0;*(isim+i)!='\0';i++)
    {
        a++;
       
    }
    */printf("isim:%s -->> uzunluğu:%d",isim,a);
    return 0;
    

    
}