//öğrenci numarasındaki sayıları tekleri ve çiftleri ayrı listeye atayan fonk
#include<stdio.h>
#include<stdlib.h>
struct student {
    int no;
    struct student *next;
};

typedef struct student ogr;

ogr *head1, *head2,*p,*q;


void write_list(void);
void f(int sayi)
{
    if(sayi%2==0)
    {
        p->no=sayi;
        p->next=(ogr *)malloc(sizeof(ogr));
        p=p->next;
    }
    else
    {
        q->no=sayi;
        q->next=(ogr *)malloc(sizeof(ogr));
        q=q->next;
    }

}
void write_list(void)
{
    ogr *p,*q;
    q=head1;
    p=head2;
    printf("\n--->>>tekler<<<---");
    while(q->next!=NULL)
    {
        printf("\n%d",q->no);
        q=q->next;
    }
    printf("\n--->>>>çiftler<<<---");
    while(p->next!=NULL)
    {
        printf("\n%d",p->no);
        p=p->next;
    }
}
int main()
{
    long int a;
    int sayi;
    head1=(ogr *)malloc(sizeof(ogr));
    q=head1;
    head2=(ogr *)malloc(sizeof(ogr));
    p=head2;
    printf("öğrenci numaranızı giriniz:"); scanf("%ld",&a); 
    while(a!=0)
    {
        sayi=a%10;
        f(sayi);
        a=a/10;
    }

    
    write_list();
    return 0;
}