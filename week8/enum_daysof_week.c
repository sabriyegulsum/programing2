#include <stdio.h>
int main()
{
    enum daysofweek{
        sun,mon,tue,wed,thu,fri,sat //tek satırda yazdırabilirim
    }; // değişkeni buradada tanımlayabilirsin ama tercih etmiyoruz
    enum daysofweek day;
    day=thu;
    printf("%d",day);

    return 0;
}