#include<stdio.h>
#include<stdlib.h>
struct list{
    char name[10];
    struct list *next;
};
typedef struct list person;
person *head;
int same(person *,person *);
void delete_same_list(void);
void write_list(void);
void create_list(void)
{
    person *p;
    int i,j;
    printf("listeniz kaç elemanlı?");
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
void delete_same_list(void)
{
    person *p,*q,*onceki;
    p=head;
    q=p;
    onceki=p;
    while(p!=NULL)
    {
        q=p;
        onceki=q;
        while(q!=NULL)
        {
            
            if(p==q)
            {
                onceki=q;
                q=q->next;
                continue;
            }
            if(same(p,q)==1)   //fonksiyona attım
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
int same(person *p, person *q)
{
    int i,a=1;
    i=0;
    while(*(p->name+i)!='\0' && *(q->name+i)!='\0')
    {
        if(*(p->name+i)== *(q->name+i))
        {
            i++;
        }
        else
        {
            a=0;
            break;
        }
    }
    if(*(p->name+i)!= *(q->name+i))
        a=0;
    return a;
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
    delete_same_list();
    printf("\naynı olan isimler silinmiştir");
    write_list();
    return 0;
}