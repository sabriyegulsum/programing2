#include <stdio.h>
#include <stdlib.h>
int x=5;
int main()
{
    printf("x=%d\n",x);

    {
        // burada  kapsam için parantez kullanmazsan  global değişkeni nasıl kullanabilirim  
        //parantez kullandığımda siz burada geçerlisiniz demek
        int x=10, y=20;
        
        
            printf("x=%d  y=%d\n",x,y);
            {
                int  y=40;  // eğer buraya int deyip yeniden tanımlamazsan bulduğu ilk y yi değiştirir ve tüm sonuc değişir DİİKKAT!!!
                x++;
                y++;
                printf("x=%d  y=%d\n",x,y);
            }
            printf("x=%d   y=%d\n",x,y);
    }
    
        
    printf("x=%d",x);
    return 0;
    
}