#include <stdio.h>
enum State {Working=0, Failed=1, Freezed=1};
int main()
{
    printf("%d, %d, %d",Working,Failed,Freezed);
    // %d lerin arasına bir şey koyarsan onu yazdırır
    //define varible
    enum State x=Failed;
    printf("\n%d",x);

    return 0;
}
// git e gidecek :)zzz