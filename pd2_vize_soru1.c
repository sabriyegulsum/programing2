#include <stdio.h>
int main()
{
    int Array[5]={10,5,4,9,12};
    int *Ap,**App;
    Ap=Array;
    App=&Ap;
    printf("output1=%d\n",Ap[2]);
    (*Ap)++;  //değeri arttırıyo
    printf("output2=%d\n",*Ap);
    Ap=Ap+2;  //adreste iki adım ilerliyo
    printf("output3=%d\n",*Ap);
    Ap=Ap-2;  //adreste iki adım geriliyo
    printf("output4=%d\n",*Ap);
    return 0;
}