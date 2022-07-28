#include <stdio.h>
// asal mı değilmi kontrol eden rekürsif fonksiyon 
// asalı bulurkan sayının yarısına kadar kontrol etmemiz yeterli!!!
//çünkü bir sayının kendisinden sonra bölünebileceği en buyuk sayı onun yarısıdır!!!
//bu yüzden parametre olarak sayıyı ve onun yarısını gönderdim
int asal_mi(int x,int y)
{
  
   if(y==1)
  {
      printf("bu sayı asaldır\n");
      return 0;
  }
  else if(x%y==0)
  {
      printf("bu sayı asal değildir\n");
      return 0;
  }
  else
    return asal_mi(x,y-1); 
}

int main(void)
{
    int a,p;
    printf("bir sayı giriniz");
    scanf("%d",&a);
    p=asal_mi(a,a/2);
    return 0;
}
