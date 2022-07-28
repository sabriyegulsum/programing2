#include <stdio.h>
float h(int x)
{
    float toplam=0;
    if(x>1)
    {
        printf("%d\n",x);
        return toplam+=(float)1/(x-1)+h(x-1);
        printf("1");
        
    }
    else 
    return toplam;
}
int main()
{
    int a=5;
    printf("toplam=%f",h(a));
    return 0;
}