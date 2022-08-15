//öğrenci numaranın tek ve çift sayıları ayrı dizilere atayan dinamik bellek
#include<stdio.h>
#include<stdlib.h>
void f(int no,int *x,int *y)
{
    int i=0,j=0;
    int sayi;
    x=(int *)malloc(sizeof(int));
    y=(int *)malloc(sizeof(int));
    sayi=no;
    while(no>0)
    {
        sayi=no%10;
        if(sayi%2==0)
        {
            y=realloc(y,(i+1)*sizeof(int));
            *(y+i)=sayi;
            i++;
        }
        else
        {
            x=realloc(x,(j+1)*sizeof(int));
            *(x+j)=sayi;
            j++;
        }
        no/=10; 
    }
    y=realloc(y,(i+1)*sizeof(int));
    x=realloc(x,(j+1)*sizeof(int));
    *x=-1;
    *y=-1;

}
int main()
{
    int i,no,*tek,*cift;
    printf("ogr no:");
    scanf("%d",&no);
    
    f(no,tek,cift);
    for(;*tek!=-1;tek++)
        printf("  %d  ",*tek);

    printf("\n");

    for(;*cift!=-1;cift++)
        printf("   %d   ",*cift);


    return 0;
}