#include<stdio.h>
int main()
{
    struct student{
        int number;
        char name[10];
        char surname[10];
        int mitgrade;
    };

    typedef struct student student;
    student dizi[10];
    for(int i=0;i<3;i++)
    {
        printf("%d.öğrencinin adı:",i+1);
        scanf("%s",dizi[i].name);
        printf("soyadı:");
        scanf("%s",dizi[i].surname);
        printf("numarası:");
        scanf("%d",&dizi[i].number);
        printf("mit motu:");
        scanf("%d",&dizi[i].mitgrade);
    }

    for(int i=0;i<3;i++)
        printf("%döğrenci \nadı:%s\nsoyadı:%s\nnumarası:%d\nvize notu:%d",(i+1),dizi[i].name,dizi[i].surname,dizi[i].number,dizi[i].mitgrade);
    return 0;
}
