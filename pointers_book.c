#include <stdio.h>
int main()
{
    int i=0;
    char *blog;
    blog="nasılsın iyimisin ?";
    printf("%s\n",blog);
    blog="değişebilirmisin pointer string";
    //sen harika bi şeysin adamım :)
    puts(blog);
   while(*blog) //buraya *blog!='\0' demek yerine *blog dedim döngü ilerlediğinde *blog null a gelicek ve while in içi sıfır olucak.döngüden çıkıcak:)
   {
       //putchar(*blog+i);
       printf("\n");
       i++;
       blog++;
   }
   for(int j=0;*blog!='\0';j++)
   {
       printf("%c\n",*(blog+j));
   }
   //diziyi nasıl ilerletiyorsun pointer stringinide aynı şekilde ilerletmen gerekir
   printf("%d",i);
    
    
    /*char bloog[]="ne oluyor";
    puts(bloog);*/
    getchar();
    return 0;
}