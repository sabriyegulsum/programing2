#include <stdio.h>
int main()
{
int i;
struct birthdate {
    int day;
    int month;
    int year;
};
struct person_data {
    char name[50];
    int lenght;
    struct birthdate date; //bir structı bir struct içerisine eleman olarak ekledik
};
struct person_data person[4]={"MURAT",180,{1,7,1974},
                              "BEHİCE",160,{10,7,1977},
                              "SABRİYE",163,{15,8,1999},
                              "NECMİYE",171,{18,8,2000}};
    //print all values of people defined in array
for(i=0;i<4;i++)
{
    printf("Record No.:%d\n",(i+1));
    //printf("Name: %s\n",person[i].name);
    puts(person[i].name);
    printf("Lenght: %d\n",person[i].lenght);
    printf("Birth date: %d/%d/%d\n",person[i].date.day,
                                    person[i].date.month,
                                    person[i].date.year);
}
return 0;
}