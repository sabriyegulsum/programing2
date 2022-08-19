// struct ı fonksiyoona parametre olarak gönderen code
#include<stdio.h>
struct person{
        char name[10];
        long int kimlik;

    };
struct person f1(void)  //structı alma fonksiyonu struct return ederiz that s cool :)
{
    struct person data;
    printf("isim giriniz:");
    scanf("%s",data.name);
    printf("kimlik bilgilerini giriniz:");
    scanf("%ld",&data.kimlik);

    return data;

}
void f2(struct person calisan) // structın içini yazdırma fonksiyonu
{
    printf("adi:%s\nkimlik:%ld",calisan.name,calisan.kimlik);
}
int main()
{
    
    struct person calisan;
    calisan=f1();
    f2(calisan);
    return 0;
    
}
// !!!eğer bir fonksiyona parametre olarak struct göndermek istiyorsan  o structı globalde tanımlaman gerekir