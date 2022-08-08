// pointer la calışma sorusunu çözmeye çalıştım :)
#include<stdio.h>
int main()
{
    char *matris,*metin;
    char m;
    int i,j,n,a,b,;
    printf("şifreleme matrisinin boyutlarını giriniz");
    scanf("%d %d",&i,&j);
    matris=(char *)malloc((i*j)*sizeof(char));
    printf("kaç harf şifrelendiniz");
    scanf("%d",&n);
    printf("şifre matrisiniz:");
    scanf("%s",matris);
    
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n;i++)
    {
        a=*(array+i)%10-1;
        b=*(array+i)/10-1;
        printf("\n%c\n",matris[b][a]);
    }
    return 0;
}