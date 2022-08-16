#include<stdio.h>
void bubble(int x[],int y)
{
    int i,j,temp;
    for(i=0;i<y;i++)
    {
        for(j=0;j<y-i;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,dizi[3];
    for(i=0;i<3;i++)
        scanf("%d",&dizi[i]);
    bubble(dizi,2);
    for(i=0;i<3;i++)
        printf("%d",dizi[i]);
    return 0;
}