#include <stdio.h>
int fonk(int a[],int x)
{
    int n;
    if(x==0)
        return a[0];
    else
    {
        n=fonk(a,x-1); // ben  burada fonksiyonu çağırdıktan sonra hiç başka bir işlem yapamaz ççünkü return çağırmadın 
                      //iyice dibe inip sonuna gelene kadar sıra sıra kıyaslar
        if(n>a[x])
            return n;
        else
            return a[x];
            // sen burada bir değer döndürmessen olmaz
        
    }
}
int main()
{
    printf("asiye");
    int array[5]={1,34,7,43,21};
    printf("%d",fonk(array,5));
    return 0;
}
