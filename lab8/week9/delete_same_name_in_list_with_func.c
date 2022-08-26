#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person {
    char name[10];
    struct person *next;
};
typedef struct person person;
person *head;
void delete_same(void);
void writre_list(void);
void create_list(void)
{
    int i,j;
    person *p;
    printf("listedeki personel sayısını giriniz:");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        if(j==0)
        {
            head=(person *)malloc(sizeof(person));
            p=head;
        }
        else
        {
            p->next=(person *)malloc(sizeof(person));
            p=p->next;
        }
        printf("isim:"); scanf("%s",p->name);
    }
    p->next=NULL;
}
void delete_same(void)
{
    person *p,*q,*onceki;
    p=head;
    q=head;
    onceki=p;
    while(p!=NULL)
    {
        onceki=p;    //burada hata cıkması gerekmiyormu
        q=p;
        while(q!=NULL)
        {
            if(p==q)
            {
                onceki=q;
                q=q->next;
                continue;
            }
                
            if(strcmp(p->name,q->name)==0)
            {
                onceki->next=q->next;
                free(q);
                q=onceki->next;
            }
                 
            else
            {
                onceki=q;
                q=q->next;
            }
        }
        p=p->next;
    }
}
void write_list(void)
{
    person *p;
    p=head;
    while(p!=NULL)
    {
        printf("\n%s",p->name);
        p=p->next;
    }
}
int main()
{
    create_list();
    write_list();
    delete_same();
    printf("same olanlar silindi");
    write_list();
    return 0;
}

