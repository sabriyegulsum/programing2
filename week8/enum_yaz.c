#include<stdio.h>
enum week{
    mon=1,tue,wed,thur,fri,sat,sun
};

int main()
{
    enum week day;
    enum tip{red,yelllow,blue};
    // enum sadece parametrelerin alt alta yazılmasıdır eğer hoca bu şekilde yazsaydı biz diziye benzetirdik
    enum tip color;
    day=thur;
    printf("haftanın %d. günü\n",day);
    color=blue+10;
    printf("%d",color);
    return 0;
}
// eğer bir değer vermezsen sıfırdan başlar  veya ortalarda bir değer verdin devamı o sayıdan artarak ilerler