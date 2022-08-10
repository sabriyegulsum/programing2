#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//moralim bozuktur bana dokanmayın :(
int main()
{
    char *name,isim[8]="sabriye";
    int sum=0,no=2010213051,i,j;
    name=(char *)malloc(8*sizeof(char));
    strcpy(name,isim);
    while(no!=0)
    {
        sum+=no%10;
        no=no/10;
    }
    i=7;
    name=realloc(name,sum*sizeof(char));
    while(sum>7)
    {
        for(j=0;j<7;j++)
            *(name+i+j)=*(isim+j);
        i+=7;
        sum-=7;
    }
    printf("%s",name);
    free(name);
    return 0;
}