//pointer ile dizinin elemanlarını al ve topla
#include<stdio.h>
#include<stdlib.h>
    int main()
    {
        int *p;
        int sum=0;

        int i;
        p=(int *)malloc(sizeof(int)*i);
        printf("how many elements of array:");
        scanf("%d",&i);
        for(int j=0;j<i;j++)
        {
            scanf("%d",p+j);
            //dizinin elemanlarını klavyeden okurken pointer kullanıyorsan ve * kullanırsan elaman yazmış oldun aynı & kullanmadın değer 
            //okumaya çalışmak gibidir
            sum+=*(p+j);
        }
    printf("sum of array :%d",sum);
    return 0;
    }
    //malloc funtion says you need how much space