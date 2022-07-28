//extern yanına tipini yazmalısın ex: extern double
//extern dosyalar arası veriyi kullanmamı sağlar
#include<stdio.h>
    int a=1,b=2,c=3;
    int f(void);
    int main(void)
    {
        printf("%3d\n",f());
        printf("%3d%3d%3d",a,b,c);
        return 0;
    }

    int f(void)
    {
        extern int a;
        int b,c;
        b=c=a;
        return (a+b+c);
    }
    //........git e atılacak......
