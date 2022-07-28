#include <stdio.h>
int main()
{
    //define new data type boolen
    // bayb enum sabit değer ama sadece int 
    enum boolen {
        false = 0,
        true = 1,
    };
    enum boolen isTrue;
    int number=false;
    isTrue = true; // bir değişkeni enum ın içerisindeki sabitlerden birine atadım
    if(isTrue==true)
        printf("%d\n",isTrue); //enum boolen tipini kullanıp bir değiişken oluşturup içindeki sabitleri bir değişkene eşitleyip yazdırabilirim
        printf("%d",false);  // enum ın içindeki sabitleri  yazdırabilirim
        
        printf("\n%d",number); //enum in içindeki sabiti int değere eşitleyebilrim

    
    return 0;
}