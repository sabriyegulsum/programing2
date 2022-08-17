#include<stdio.h>
int main()
{
    int Arr[]={10,5,4,12};
    int *Ap=Arr;
    int **App=&Ap; // bu pointer tanımlamasında yapılan bir eşitlemedir. aşağıda bu şekilde yazarsan bitersin :)) bu son gülüşün olur
    printf("output1:%d\n",Ap[2]);
    Ap++;
    printf("output 2:%d\n",*(Ap+2));
    printf("output 3:%d\n",Ap+1);
    (*App)++;                         //cok dikkat ** olan bir pointeri * tek yıldız kullanarak işleme alırsan tuttuğu adreste ilerler tmm
    printf("output 4:%d\n",**App);
    Ap=Ap-2;
    printf("output 5:%d\n",*App);
    return 0;
}
//güzel soruymuş :))