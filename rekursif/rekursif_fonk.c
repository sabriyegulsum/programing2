#include <stdio.h>
int fonk(int x)
{
    if(x==0)
    {
        return x;
    }
    //eğer printfi buraya koyarsam aynı sırayla yazdırır
    //printf("%d\n",x);
   fonk(x-1);
   //printf("%d\n",x);
   //printf i aşağıya koyduğum için son adımdan yazdırarak gelir dikkat!!!
   //printfin nerede olduğu çok önemli
}
int main()
{
    int n;
    printf("bir sayı giriniz: ");
    scanf("%d",&n);
    fonk(n);
    return 0;
}