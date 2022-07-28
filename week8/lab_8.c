/*ders devam listesinde bulunan öğrenciler için kullanılınacak "student" isimli bir struct
yapısını "number","name","surname",ve "mitdermGrade" alanlarından oluşacak şekilde tanımla
yınız. Tanımladığınız bu yapıyı kullanarak 10 öğrenci için struct dizisi oluşturunuz ve 
klavyeden 3 öğrencinin bilgilerini alınız. Daha sonra bilgileri alınan öğrencilerin bilgi
lerini ekrana yazdırıız*/
#include <stdio.h>
#include <string.h>
 int main()
 {
     struct student{
         int number;
         char name[40];
         char surname[40];
         int mitGrade;
     };
     struct student data[10];
     for(int i=0;i<3;i++)
     {
        printf("%d.öğrencini bilgilerini giriniz:",(i+1));
        printf("Number:");
        scanf("%d",&data[i].number);
        printf("\nName:");
        scanf("%s",data[i].name);
        printf("\nSurname:");
        scanf("%s",data[i].surname);
        printf("\nMitderm Grade:");
        scanf("%d",&data[i].mitGrade);
     }
     for(int i=0;i<3;i++)
     {
        printf("\n%d\n",data[i].number);
        puts(data[i].name);
        puts(data[i].surname);
        printf("%d",data[i].mitGrade);
     }
     return 0;
 }