#include<stdio.h>
#include<stdlib.h>
struct isim{
    char name[10];
    struct isim *next;
};
typedef struct isim isim;
isim *head;

void create_list(void)
{
    isim p;
    printf("isimleri giriniz:(biritmek için 1 e basınız)");
    head=(isim *)malloc(sizeof(isim));
    p=head;
    scanf("%s",p->name);
    p->next=(isim *)malloc(sizeof(isim));
    p=p->next;
    while(strcmp(p->name,1)!=0)
    {
        scanf("%s",p->name);
        p->next=(isim *)malloc(sizeof(isim));
        p=p->next;
    }
    p->next=NULL;
}
isim * find_middle(void)
{
    int i=0;
    isim *p;
    p=head;
    while(p->next!=NULL)
    {
        i++;
        p=p->next;
    }
    for(int j=0;j<=i/2;j++)
    {
        p=p->next;
    }
    return p;
}
void delete(isim *p)
{
    isim *q;
    int i=0;
    p=find_middle();
    while(p->name[i]!='\0')  // ortadaki isimin harf sayısını heasapladım
    {
        i++;
    }
    p=head;
    q=head;
    
}
