#include<stdio.h>
#include<stdlib.h>
struct calisan{
    char name[10];
    int age;
    struct calisan *next;
};
typedef struct calisan isci;
isci *head;
void create_list(void)
{
    int a;
    isci *p;
    head=(isci *)malloc(sizeof(isci));
    p=head;
    printf("listeyi bitirmek için sıfıra tıklayınız");
    printf("\nisim:"); scanf("%s",p->name);
    printf("age:");  scanf("%d",&p->age);
    printf("\n--->>");
    scanf("%d",&a);
    while(a!=0)
    {
        p->next=(isci *)malloc(sizeof(isci));
        p=p->next;
        printf("isim:"); scanf("%s",p->name);
        printf("age:");  scanf("%d",&p->age);
        printf("\n--->>"); scanf("%d",&a);
    }
    p->next=NULL;
}
void write_list(void)
{
    isci *p;
    p=head;

    while(p!=NULL)
    {
        printf("\n%s   %d",p->name,p->age);
        p=p->next;
    }
}
void delete_middle(void)
{
    int counter=0;
    isci *p, *q;
    p=head;
    while(p!=NULL)
    {
        counter++;
        p=p->next;
    }
    p=head;
    q=p;
    for(int i=1;i<=counter/2;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    free(p);
    write_list();
}
int main()
{
    create_list();
    printf("\n--->>> Listenin ilk hali <<<---");
    write_list();
    printf("\n--->>> Listenin ortancası slindi <<<---");
    delete_middle();
    return 0;
}
// seviyorum bu işi yaa :))
