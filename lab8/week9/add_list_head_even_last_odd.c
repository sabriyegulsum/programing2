#include<stdio.h>
#include<stdlib.h>
struct list{
    int no;
    struct list *next;
};
typedef struct list list;
void write_list(void);
list *head;

void write_list(void);
void create_list(int a[],int i)
{
    list *p,*q,*s;
    head=(list *)malloc(sizeof(list ));
    p=(list *)malloc(sizeof(list));
    p->next=NULL;
    s=p;
    q=head;
    int j;
    for(j=0;j<i;j++)
    {
        if(a[j]%2==0)
        {
            q->next=(list *)malloc(sizeof(list));
            q=q->next;
            q->no=a[j];
        }
        else
        {
            p->no=a[j];
            p->next=(list *)malloc(sizeof(list));
            p=p->next;
        }
    }
    p->next=NULL;
    q->next=s;
} 
void write_list(void)
{
    list *p;
    p=head->next;
    while(p->next!=NULL)
    {
        printf("\n%d",p->no);
        p=p->next;
    }
}
int main()
{
    int a[10];
    int i=0;
    printf("sayılarınızı giriniz");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    create_list(a,i);
    write_list();
    return 0;
}