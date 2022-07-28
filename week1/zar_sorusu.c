#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int point,i,first,second,a;
    srand(time(NULL));    // srand(time(NULL)) fonksiyonunu bir kere çağırısın ve her rand kullanığında sana yeni değerler verir :)))
    first=1+rand()%6;
    second=1+rand()%6;
    a=first+second;
    if(a==7||a==11)
        printf("::::CONGRATULATIONS YOU WİN::::%d",a);
    else if(a==2||a==3||a==12)
        printf("!!!! YOU LOSE PLEASE TRY AGAİN !!!!%d",a);
    else
    {
        point=a;
        while(1)  // bu döngü ikisinden biri olana kadar devam eder...
        {
        
            first=1+rand()%6;
            second=1+rand()%6;
            a=first+second;
            if(point==a)
            {
                printf("::::CONGRATULATIONS YOU WİN:::%d %d",point,a);
                break;
            }

            else if(a==7)
            {
                printf("!!!! YOU LOSE PLEASE TRY AGAİN !!!!%d %d",point,a);
                break;
            }
        }
    }
    return 0;
}