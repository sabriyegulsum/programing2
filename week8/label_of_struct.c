#include <stdio.h>
#include <string.h>
int main()
{
    struct person_data{
        char name[40];
        int lenght;
    };
    struct person_data person={"BEHİCE",160}; //struct için başlangıç değeri verirsek strcpy gerek yok direk eşitleriz
    struct person_data person_1;
    struct person_data person_2;
    strcpy(person_1.name,"SABRİYE"); //strcpy mecbur direk stringin içini int sayı gibi eşitleyemezsin dikkat
    person_1.lenght=163;
    strcpy(person_2.name,"NECMİYE");
    person_2.lenght=171;
    puts(person.name);
    printf("%d",person.lenght);
    return 0;
}