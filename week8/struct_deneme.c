#include <stdio.h>
int main()
{
    struct { //eğer structın yanına yazarsam hepsi bir int 
            //gibi değişken tipi yapar
        int year;
        int month;
        int day;
    }birthday; //değişkenin adı istediğim kadar ekleyebilirim

    printf("Enter your bith day ");
    scanf("%d-%d-%d",&birthday.year,
                     &birthday.month,
                     &birthday.day  );
    printf("Your birthday: ");
    printf("%d/%d/%d\n",birthday.day,
                        birthday.month,
                        birthday.year);
    return 0;
}