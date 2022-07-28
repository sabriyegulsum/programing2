#include <stdio.h>
#include <string.h>
char * s(char *str1, const char *str2)
{
    int i;
    uzunluk(str2);
    for(int m=0;m<i;m++)
        *(str1+m)++=*(str2+m)++;
        
    str1='\0';
    return str1;
}
int uzunluk(char const *a)
{
    int k=0;
    while (*a)
    {
        k++;
    }
    return k;
}



int main()
{
    char a[50]= " neymiş ben kem gözlüymüşüm ";
    char b[50];
    char * c;
    c=s(b,a);
    printf("%s", c);
    
    printf("%s",b);
    
    return 0;
}