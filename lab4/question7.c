#include<stdio.h>
int main()
{
    int i=0,j;
    char s[100];
    char *p;
    gets(s);
    p=s;
    printf("%s",p);
    while(*(p+i)!='\0') // NULL yazınca kod çalışmıyo ama olur böyle şeyler
    {
        i++;
    }
    for(j=i;j>=0;j--)
    {
        printf("%c",*(p+j));
    }

    printf("\n%d",i);
    return 0;
}
/*önemli not: bir dizinin bütün elemanlarını sadece adını yazdırdığında  hepsini yazdıramazsın 
ama stringde bunu yapabilirsin bu stringin özelliğidir. pointer da eiştlediğine göre uyumludur 
I mean  eğer bir pointer stringi tutarsa sadece pointerın adıyla hepsinni yazabilirsin ama dizide olmaz