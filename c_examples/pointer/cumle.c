#include<stdio.h>
#include<stdlib.h>


int main()
{
    char cumle[100],*str;
    int i=0,k=0;
    gets(cumle);
    for(i=0;cumle[i]!='\0';i++)
    
    while(i>=0)
    {
        str=(char *)malloc(sizeof(char ));

        while(*(cumle+i)!=' ')
        {
            *(str+k)=*(cumle+i);
            k++;
            i--;
            str=realloc(str,(k+1)*sizeof(char));
            
            
        }
        k--;
        for(;k>=0;k--)
            printf("%c",*(str+k));
        printf(" ");
        k=0;
        i--;
        free(str);
    }
    return 0;
}