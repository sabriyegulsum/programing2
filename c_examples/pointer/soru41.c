#include<stdio.h>
#include<stdlib.h>


int  f(int x)
{
    
    int i,a=1;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            printf("\n\n\n****this number panddigital but not prime %d",x);
            a=0;
            break;
        }
                
    }
    if(a==1)
    {
        printf("\n\n****this number pandigital and is also prime %d:))",x);
        return 1;
    }
        
    return 0;
    
}
int main()
{
    int a=1,*array,i,sayi,temp,n=0,j=0,temp2,b;
    int m,k;
    //scanf("%d",&sayi);
    sayi=9876;
    //the biggest pandigital number

    temp2=sayi;

    while(1)
    {
        
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
                array=realloc(array,(j+2)*sizeof(int));
                j++;
            
            }
            else
            {
                a=0;
                break;
            }
            temp=temp/10;
            
        }ß
        
        //printf("\n***%d",array[0]);
        //arrayi düzgün alıyoe ama çıkamıyor for 
        for(k=0;k<n;k++)
        {
            for(m=0;m<n;m++)
            {
                if(k==m)
                    continue;
                if(array[k]==array[m])
                {
                    a=0;
                    break;
                }
                    
            }
            if(a==0)
                break;
        }
        
        
    //}
    //printf("\na=%d",a);
        if(a==1)
        {
            b=f(temp2);
                if(b==1)
                    break;
        }  
        if(b==1)
            break;
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