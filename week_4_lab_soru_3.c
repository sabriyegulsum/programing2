#include <stdio.h>
int main()
{
    int a[10];
    int *aptr=a;
    printf("Dizinin eleman sayılarını giriniz:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<10;j++)
    {
        printf("%d",*(aptr+j));
        printf("\n");
    }
    return 0;
}