#include<stdio.h>
#include<stdlib.h>
int main()
{
    int temp,no,*array,i,sayi,sum1,sum2;
    array=(int *)malloc(sizeof(int));

    for(i=0,no=32;no<100;no++,i++)
    {
        sum1=sum2=0;
        temp=no;
        while(no>0)
        {
            sayi=no%10;
            *array=sayi;
            array=realloc(array,(i+2)*sizeof(int));
            no=no/10;
            array++;
        }

        for(int j=1 ; j<=10*i ;)
        {
            sum2+=*(array-1);
            sum1+=*(array-1)*j;
            array--;
            j*=10;
        }
        printf("%d",sum1);
        if(sum1+temp==sum2*11)
            printf("\n%d",temp);
            free(array);
        i=0;
    }
    return 0;

}