#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //tipsiz bir pointer oluşturdum
    void *a;
    //hafızada belli bir tipte yer ayırdım
    a=(char *)malloc(6);
    //strcpy bir stringi başka bir stringe kopyalamak için kulllanılır 1. si kopya içine atılacak olan 2.si kopyalanan dir
    //stringlerde sadece tanımladığın sırada  değer atayabilirsin aşşağıda değer atamak istiyosan strcpy kullanmak zorundasın
    strcpy((char *)a,"12345");
    printf("%s\n",(char *)a);
    free(a);
    //tipsiz pointerin özelliği free yaptıktan sonra başka tipte tanımlayabilirsin
    a=(double *)malloc(sizeof(double));
    *(double *)a=3.123;
    printf("%lf",*(double *)a);

    return 0;
}