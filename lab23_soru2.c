#include<stdio.h>
int kitle(float kilo,float boy)
{
    float indeks;
    indeks=kilo/(boy*boy);
    if(indeks<=18)
        
        return 1;
    else if(indeks<=25)
        
        return 2;
    else if(indeks<=30)
       
        return 3;
    else 
        return 4;
}
int main()
{
    float kilo,boy;
    int sonuc;
    printf("kilo boy");
    scanf("%f",&kilo);
    scanf("%f",&boy);
    sonuc=kitle(kilo,boy);
    if(sonuc==1)
        printf("zayıf");
    else if(sonuc==2)
        printf("normal");
    else if(sonuc==3)
        printf("kilolu");
    else
        printf("obez");

    return 0;
}