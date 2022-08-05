#include<stdio.h>
int main()
{
    char matris[3][3];
    char a;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
                
            //printf("enter num:");
            //matris[i][j]=getchar();
            scanf("%c",&a);
            if(a==0x0A) //  enter girdiğinde bunu dizinin bir elemanı olarak alıyor o yüzden           
            {           // bu koşulu ekledim
                j--;
                continue;
            }
            else
            {
                matris[i][j]=a;
            }
            
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\n%c i=%d  j=%d ",matris[i][j],i,j);
        }
    }
    return 0;
}