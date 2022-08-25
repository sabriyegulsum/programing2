#include<stdio.h>
#include<stdlib.h>
struct student{
    int no;
    char name[10];
    struct student *next;
};
typedef struct student student;
student *head;  //head i globalde tanımlarsan fonksiyonlara tekrar tekrar tanımlamana gerek yok
void create_list(void)
{
    student *p;
    int i,j;
    printf("listeniz kaç elemanlı?");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        if(j==0)
        {
            head=(student *)malloc(sizeof(student));
            p=head;
        }
        else{
            p->next=(student *)malloc(sizeof(student));
            p=p->next;
        }
        printf("%d.öğrenci isim:",j+1); scanf("%s",p->name);
        printf("no:"); scanf("%d",&p->no);
    }
    p->next=NULL;
}
void write_list(void)
{
    student *p;
    p=head;
    printf("----->>> Listeniz <<<<-----");
    while(p!=NULL)
    {
        printf("\nisim:%s\nno:%d",p->name,p->no);
        p=p->next;
    }
}
void add_list(void)
{
    student *p,*new;
    p=head;
    new=(student *)malloc(sizeof(student));
    printf("isim:"); scanf("%s",new->name);
    printf("no:"); scanf("%d",&new->no);
    new->next=p;
    head=new;
}
int main()
{
    int a;
    create_list();
    write_list();
    printf("\nbaşa düğüm ekle (hayır:''0' evet:'1')");
    scanf("%d",&a);

        while(a!=0)
        {
            add_list();
            write_list();
            printf("\nchoose : 1 & 0 ");
            scanf("%d",&a);
        }
    printf("listeye ekleme bitmiştir");
    return 0;

}
    