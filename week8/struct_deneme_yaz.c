#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct {
        int age;
        char name[10];
    }x,y,z;    
    //buraya yazılan değişkeninşn adıdır. struct tipindeki değişkeninin adı identy aynı int x teki x gibi
    
    printf("kişi bilgileri name ve yaş x:");
    scanf("%s",x.name);
    scanf("%d",&x.age);
    printf("kişi bilgileri name ve yaş y:");
    scanf("%s",y.name);
    scanf("%d",&y.age);
    printf("kişi bilgileri name ve yaş z:");
    scanf("%s",z.name);
    scanf("%d",&z.age);
    printf("\nx -->isim:%s  age:%d",x.name,x.age);
    printf("\ny -->isim:%s  age:%d",y.name,y.age);
    printf("\nz -->isim:%s  age:%d",z.name,z.age);

    return 0;
}