#include<stdio.h>
#include<string.h>

enum months_name{
    january=1,february,march,april,may,june,
    july,august,september,october,november,december
};
typedef enum months_name months;
int main()
{
    
    void write_month_name(months);

    months thismonth=august;
    printf("%d",thismonth);
    write_month_name(thismonth);  
    //fonksiyona parametre göndericem buda benim oluşturdum
    //months tipinde thismonth ismindeki bir değişkendir :)
    return 0;
}


void write_month_name(months thismonth)
{
    switch thismonth:
    {
        case january: printf("january\n"); break;
        case february:printf("february\n")
    }
}



    // x=thismonth
    

