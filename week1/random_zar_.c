#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
    int zar,i;
    for(i=0;i<6000;i++)
    {
        zar=1+rand()%6;
        switch(zar)
        {
            case 1:
            n1++;
            break;
            case 2:
            n2++;
            break;
            case 3:
            n3++;
            break;
            case 4:
            n4++;
            break;
            case 5:
            n5++;
            break;
            case 6:
            n6++;
            break;

        }

    }
    printf("1%13d\n",n1);
    printf("2%13d\n",n2);
    printf("3%13d\n",n3);
    printf("4%13d\n",n4);
    printf("5%13d\n",n5);
    printf("6%13d\n",n6);
        return 0;
}