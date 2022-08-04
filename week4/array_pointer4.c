#include<stdio.h>
int main()
{
    int i,j;
    char *ilkBaharAylar[3]={"mart","nisan","mayıs"};
    char * yazAylar[3]={"haziran","temmuz","agustos"};
    char *sonBaharAylar[3]={"eylul","ekim","kasım"};
    char *kisAylar[3]={"aralık","ocak","subat"};

    char **table[4];
    table[0]=ilkBaharAylar;
    table[1]=yazAylar;
    table[2]=sonBaharAylar;
    table[3]=kisAylar;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%s\n",table[i][j]);
        }
    }
    printf("%s",*(yazAylar+1));
    getchar();
    return 0;
}