//  belive
#include<stdio.h>
int main()
{
    struct {
        int day;
        int month;
        int year;
    }she,her_twin;   // bu ikisini x ve y değişkenkenleri gibi düşün

    printf("enter she birthday day month year");
    scanf("%d %d %d",&she.day,&she.month,&she.year);
    her_twin=she;
    // struct değişkenlerinide birbirine eşitleyebiliriz. aynı x ve y leri eşitleidiğimz gibi değerlerini diğerine kopyalar
    printf("her twin birth day:%d %d %d",her_twin.day,her_twin.month,her_twin.year);

    return 0;
}