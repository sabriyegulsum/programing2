#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10];
    printf("bir şeyler yazarmısın\n");
    gets(a);
    char *aptr=a;
    int i=0;
    while(aptr[i]!='\0')
    {
        i++;
    }
    //pointer da aynı dizi gibi ilerlemen lazım
    printf("stringin uzunluğu=%d\n",i);
    return 0;
}