#include<stdio.h>
int main()
{
    char matris[3][3];
    char m;
    int i,j,n,a,b,array[100];
    printf("şifreleme matrisini giriniz");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%c",&m);
            if(m==0x0A) //enter girildiğinde onu dizinin bir elemanı olarak alıyor
            {
                j--;
                continue;
            }
            else
                matris[i][j]=m;
        }
    }
    printf("kaç harf şifrelendiniz");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n;i++)
    {
        a=*(array+i)%10-1;
        b=*(array+i)/10-1;
        printf("\n%c",matris[b][a]);
    }
    return 0;
}