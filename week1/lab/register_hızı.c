#include <stdio.h>
#include <time.h>
int main()
{
    
     clock_t start_t, end_t;
    register int id1,id2;
    start_t = clock();
    for(id1=0;id1<2000000;id1++)
    {
        for(id2=0;id2<1000;id2++){ }
    }
    end_t = clock();       
    printf("start değeri %lu\n",start_t);
    printf("end_t değeri %lu\n",end_t);
    printf("Döngü çalışma süresi (saniye): %.3f",(double)(end_t-start_t)/CLOCKS_PER_SEC);
    return 0;
}