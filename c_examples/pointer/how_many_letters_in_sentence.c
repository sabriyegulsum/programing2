#include<stdio.h>
#include<stdlib.h>
int main()
{
    char metin[100],m,n;
    int i=0,*array,j;
    printf("enter the sentence");
    gets(metin);
    array=(int *)calloc(25,sizeof(int));
    while(metin[i])
    {
        for(j=0;j<=25;j++)
        {
            m=(j+97);
            n=(j+65);
            if(metin[i]==m|| metin[i]==n)
                *(array+j)+=1;
        }
        i++;
    }
    for(j=0;j<=25;j++)
    {
        printf("\n%c=%d",(j+97),*(array+j));
    }
    return 0;
}