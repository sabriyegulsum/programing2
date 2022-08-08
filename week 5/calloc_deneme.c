#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *a;
    a=(char *)calloc(10,sizeof(char));
    printf("%p",a);
    for(int i=0;i<10;i++)
    {
        printf("%d",i);
        scanf("%c",&*(a+i));
        if(*(a+i)==0x0A)
        {
            i--;
            continue;
        }
       
    }
    a=realloc(a,15*sizeof(char));
    printf("\nrealloc ne döndürür %p",a);
    free(a);
    return 0;
}
//char ı alırken enter ı da sayıyor
//callloc da sadece istediğimiz boyuttan sonra , koyuroruz mallocda * :)
//realloc a adres göndeririz ve gönderdiğimiz bloğun yeni güncel eleman sayısını yazarız 
//pointerları ilerleterek eleman aldıysan başa getirmelisin