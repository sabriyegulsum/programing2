#include<stdio.h>
int main()
{
    struct {
        int day;
        int month;
        int year;
    }she,her_twin;

    printf("enter she birthday day month year");
    scanf("%d %d %d",&she.day,&she.month,&she.year);
    her_twin=she;
    printf("her twin birth day:%d %d %d",her_twin.day,her_twin.month,her_twin.year);

    return 0;
}