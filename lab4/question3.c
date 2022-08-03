#include<stdio.h>
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=array;
    for(int i=0;i<10;i++)
    {
        printf("\n%d",p[i]);
    }
    return 0;
}
//pointerla dizi elemanları kullanılabilir ex: *p+i
//ama pointeri dizi gibi ilerlemek istiyorsan p[i] olması lazım * gelmez [ ]  işareti adres yerine geçer
// zaten dizinin kendisinde bu yüzden pointer işareti kullanılmaz