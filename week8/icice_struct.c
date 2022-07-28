#include <stdio.h>
int main()
{
    struct {
        char name[40];
        int lenght;
        struct {
            int year;
            int month;
            int day;
        }borninfo;
    }personinfo;
    printf("Your Name:");
    gets(personinfo.name);
    //scanf("%s",personinfo.name);
    printf("Your Lenght:");
    scanf("%d",&personinfo.lenght);
    printf("Your Birthday: ");
    scanf("%d-%d-%d",&personinfo.borninfo.year, //bu scanf içine yadığın işareti yazman gerekiyo
                     &personinfo.borninfo.month,
                     &personinfo.borninfo.day);
    printf("Entered İnformation:\n");
    puts(personinfo.name);
    printf("Name:%s\nLenght:%d\nBirthday:%d/%d/%d",personinfo.name,
                                                   personinfo.lenght,
                                                   personinfo.borninfo.day,
                                                   personinfo.borninfo.month,
                                                   personinfo.borninfo.year);
                                    
    return 0;
}