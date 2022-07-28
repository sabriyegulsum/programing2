#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    struct ogr{   // bu sadece değişken tipi ben yeni bir tip  oluşturuyorum
        int number;
        char name[40];
        char surname[40];
        int mitgrade;
    };
    struct ogr student[10]; //değişken adını girdim
    for(i=0;i<3;i++)
    {
    printf("%d.öğrenci için bilgileri giriniz\n",i+1);
    printf("Your Name:");
    scanf("%s",student[i].name);
    printf("Your Surmane:");
    scanf("%s",student[i].surname);
    printf("Your Number:");
    scanf("%d",&student[i].number);
    printf("Your Mitgrade:");
    scanf("%d",&student[i].mitgrade);
    }
    for(i=0; i<3;i++)
    {
    printf("Öğrenci %d in Bilgileri:\n",i+1);
    printf("Name:%s\nSurname:%s\nNumber:%d\nMitderm Grade:%d\n",student[i].name,
                                                              student[i].surname,
                                                              student[i].number,
                                                              student[i].mitgrade);
    }
    return 0;
}