#include<stdio.h>
#include<stdlib.h>
void f(int x)
{
    x*=2;
    printf("%d",x);
}
int main()
{
    int *x,i=10;
    x=(int *)malloc(sizeof(int *)); 
    *x=10;
    f(*x); //pointer x olarak atmak demek onu normal her bir sayı gibi göndermektir
    printf("\n%d",*x);
    return 0;
}
//pointrimızı tanımladıktan  sonra direk bir sayıya eşitleyemeyiz aslında
//bir tanımlanmış bir varible a eşitleyebilmemizin sebebi
//onun hafızada yeri var ama hafızada yeri yok bir sayıya eşitlediğininz zaman segmentation fault olur
//çünkü onnun kocasısın evi yok :)))