#include <stdio.h>
//extern ü diğer fonksiyonlarda tanımlamadan kullanarak değiştirebilirsin
 extern int a=1;
 extern int b=2;
int c=3;
int f(void);  // fonksiyon eğer parametre almıyorsa tanımlarken içine (void) yazarim ama çağırıken gerek yok f() enough
int main()
{
    
    printf("%3d\n",f());     
    // eğer fonksiyonu çağırısam externlü olan değişken eğer fonksiyonda tekrardan  tanımlamadan bir değişiklik yaparsam externlü olan değişir 
    //bebeğim kafanı karıştırma ama global değişken gibi  :)))
    printf("%3d%3d%3d",a,b,c);
    
    return 0;
    
}
int f(void)
{
    // auto tam bi ezik.
    //yani olduğu fonksiyonlarda geçerli
    auto  int b,c;
    a=b=c=4;  // a yı tanımlamadığım için extern olan ifadeyi değiştirmiş oldum
    return a+b+c;
}