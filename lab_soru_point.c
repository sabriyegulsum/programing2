//bir fonksiyon alacak senin no ve iki char ve bir int point olacak dinamikle çöz odd lar int array evenlar char arryine gidecek 
#include <stdio.h>
#include <stdlib.h>
void f(char *cift,int *tek,int a);

int main()
{
    int a;
    printf("öğrenci numaranızı giriniz");
    scanf("%d",&a);
    char *even;
    int  *odd;
    //char dinamik dizi
    even=(char *)malloc(sizeof(char));  
    //int dinamik dizi
    odd=(int *)malloc(sizeof(int));
    // pointer başlangıç adresini fonksiyona göndereceksen direk adını yaz baby
    f(even,odd,a);
    return 0;
}
void f(char *cift,int *tek,int a)
{
    int i=0,k=0,j;
    while(1)
    {
        if(a==0)
            break;
       
        if(a%2==0)
        {
            *(cift+i)=a%10;
            cift=realloc(cift,(i+1)*sizeof(char));
            i++;
            
        }
        else
            {
                *(tek+k)=a%10;
                tek=realloc(tek,(k+1)*sizeof(int));
                k++;
            }
        a=a/10;
    }
    for(j=0;j<i;j++)
    //burada char dizisine almana rağmen %d kullandık
    //cünkü char dizisine atarken bir int sayısının rakamlarını atadım
    //bu yüzden char da rakam olarak yazdırmam gerekir
        printf("%d",*(cift+j));    //dizinin elemanı için neden * kullandığımızı artık biliyorsun herbiri bir eleman bunların 
        puts("\n");
    for(j=0;j<k;j++)
        printf("%d",*(tek+j));
}
