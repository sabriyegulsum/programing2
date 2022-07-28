#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char *a,*b,*c;
    // daha kaç olduğunu söylemediğim halde bu superrsmart bilgisayrım son haline bakıp yine o kadar yer ayırdı 
    //ben şokkk :))
    a=(char *)malloc(i*sizeof(char));
    b=(char *)malloc(i*sizeof(char));
    //üsttekileri reallocla yapamassız baby çünkü onu alıcaksın bir tane olunca almıyo ki
    c=(char *)malloc(sizeof(char));

    printf("bir şeyler yazınız\n");
    scanf("%s",a);
    printf("bir şeyler daha yazınız\n");
    scanf("%s",b);


    for(i=0;a[i]!='\0';i++)
    {
        *(c+i)=a[i];
        c=(char *)realloc(c,(i+1)*sizeof(char));
    }

    int k=0;


    while(b[k]!='\0')
    {

        *(c+i)=b[k];
        c=(char *)realloc(c,(i+1)*sizeof(char));
        i++;
        k++;
    }
    printf("%s",c);


    return 0;
}