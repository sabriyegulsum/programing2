#include <stdio.h>
enum month_list{january=1,february,march,april,may,june,
july,august,september,october,november,december};
typedef enum month_list months;
void writeMonth_name (months);//months burada int alıcak demek gibi
int main()
{
    months thismonth= august;
    writeMonth_name (thismonth);
    return 0;
}
void writeMonth_name(months thismonth )
{
    switch(thismonth){
        case january : printf("January\n");break;
        case february : printf("February\n");break;
        case march : printf("March\n");break;
        case april : printf("april\n");break;
        case may : printf("May\n");break;
        case june : printf("June\n");break;
        case july : printf("July\n");break;
        case august : printf("August\n");break;
        case september : printf("September\n");break;
        case october : printf("October\n");break;
        case november : printf("November\n");break;
        case december : printf("December\n");break;
    }
}