#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *isim,a[100];
    int i,k,j;
    printf("bir cümle yazınız");
    gets(a);
    for(i=0;*(a+i)!='\0';i++)
    i++; // null'u ekledim
    isim=(char *)malloc(i*sizeof(char));
    isim=a; //
    for(k=i-1;k>=-1;k--) //nuldan önce başlatıyorum vee -1 e kadar gidiyom çünkü ilk karakteride yazdırıcam
        if(*(isim+k)==' ' || k==-1)
            {
                for(j=k+1;*(isim+j)!=' '&& *(isim+j)!='\0';j++)   //döngünün içi olduğu sürece mantığı ile çalişir
                {
                    printf("%c",*(isim+j));
                }
                printf(" ")
            }

    
    

    
        

    
    return 0;
        

}