#include <stdio.h>
int main()
{
    int i;
    struct birthdate{
        int day;
        int month;
        int year;
    };
    struct person_data {
        char name[50];
        int lenght;
        struct birthdate date;
    };
    typedef struct person_data person;
    person *ptr;
    person birey[4] = {"MURAT",180,{1,7,1974},
                       "BEHİCE",160,{10,7,1977},
                       "SABRİYE",163,{15,8,1999},
                       "NECMİYE",171,{18,8,2000}}; 
    ptr=birey;
            
    for(i=0;i<4;i++,ptr++)
    {
        printf("\n%s\n%d\n%d/%d/%d",ptr->name,ptr->lenght,ptr->date.day,
                                                  ptr->date.month,
                                                  ptr->date.year);
    }
    return 0;
}