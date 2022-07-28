#include <stdio.h>
int main()
{
    struct{
        int year;  //bak canım structın öğelerinde yazarken sonuna ; unutma
        int month;
        int day;
    }birth_day;
    scanf("%d%d%d",&birth_day.day,
                    &birth_day.month,
                    &birth_day.year);
    if(birth_day.month<10)
    {
        printf("%d/0%d/%d",birth_day.day,
                    birth_day.month,
                    birth_day.year);
    }
    else
    {
         printf("%d/%d/%d",birth_day.day,
                    birth_day.month,
                    birth_day.year);
    }
    
    return 0;
}