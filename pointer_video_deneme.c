#include <stdio.h>
#include <stdlib.h>
int main()
{
    //dizileri pointera atayalım:))
    /*int dizi[5]={1,2,3,4,5};
    int *p_dizi;
    p_dizi=dizi;
    //dizilerde adres vermeme gerek yok çünkü dizilerde birer pointerdır
    for(int i=0;i<5;i++)
    {
        printf(" dizinin %d. elemanının değeri=%d ve adresi %p\n",i+1,*(p_dizi+i),p_dizi+i);
    }*/
    int *p,a,i;
    printf("dizinin eleman sayısını giriniz");
    scanf("%d",&a);
    p=(int *)malloc(a*sizeof(int));
    for(i=0;i<a;i++)
        scanf("%d",p+i);
    return 0;

}