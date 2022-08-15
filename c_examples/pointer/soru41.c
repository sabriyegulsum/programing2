#include<stdio.h>
#include<stdlib.h>


void f(long int x)
{
    
   long int i,a=1;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            //printf("\n\n\n****this number panddigital but not prime %d",x);
            a=0;
            break;
        }
                
    }
    if(a==1)
    {
        printf("\n\n****this number the biggest pandigital and is also prime %ld:))",x);
    }
        
    
}
int main()
{
    int a=1,*array,i,n=0,j=0,b;
    long int temp,temp2,sayi=987654321;
    int m,k;
    

    temp2=sayi;

    while(1)
    {
        sayi=temp2;
        array=(int *)malloc(sizeof(int));
    //for(i=0;;i++)
    //{
        temp=sayi;
        while(sayi>0)
        {
            sayi=sayi/10;
            n++;
        }
        sayi=temp;
        while(temp>0)
        {
            sayi=temp%10;
            if(sayi<=n)
            {
                
                *(array+j)=sayi;
                //printf("%d",array[j]);
                //diziyi başarılı bir şekilde allıyor orada sorun yok
                array=realloc(array,(j+2)*sizeof(int));
                j++;
            
            }
            else
            {
                a=0;
                break;
            }
            temp=temp/10;
            
        }
        
        //printf("\n***%d",array[0]);
        //arrayi düzgün alıyoe ama çıkamıyor for 
        if(a!=0)
        {
            for(k=0;k<n;k++)
            {
                for(m=0;m<n;m++)
                { 
                    a=1;
                    if(k==m)
                        continue;
                    if(array[k]==array[m])
                    {
                        printf("array k=%d ",array[k]);
                        printf("array m=%d",array[m]);
                        a=0;
                        printf("\n--->>sayınızda aynı harfler var  :(");
                        break;
                    }
                    
                }
               
            }
        }
        if(a==1)
        {
            f(temp2);
            break;
        }  
        else
        {
            temp2--;
            free(array);
            
        }

    }
        return 0;
}

//ilk sayi ile bir sonrakinin eşit olmadiğini görüp öyle atamam gerekir hiç bir syi eşit oln-moyx-cak
//ilk elemanın diğerlerinden farklımı diye sorguluyor yeterli değil bütün el. farklı olmalı