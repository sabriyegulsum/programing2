#include <stdio.h>
#include <stdlib.h>
int main()
{
    int boyut;
    int *ptr;
    printf("dizinin eleman sayını giriniz:");
    scanf("%d",&boyut);

    ptr=(int *)calloc(boyut,sizeof(int));   
    printf("dizinin elemanlarını girininz");
    for(int i=0;i<boyut;i++)
    {
        scanf("%d",ptr+i);
    }
    int max=*ptr;
    for(int i=0;i<boyut;i++)
    {
        if(*(ptr+i)>max)
            max=*(ptr+i);
    }
    printf("dizideki en buyuk sayı=%d",max);

    return 0;
}