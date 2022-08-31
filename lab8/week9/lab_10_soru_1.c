#include<stdio.h>
#include<stdlib.h>
struct node{
    int number;
    struct node *next;
};
typedef struct node node;
node *head;
void write_list(void);
void create_list(int *a)
{

    node *p,*q,*s;
    head=(node *)malloc(sizeof(node));
    q=head;
    p=(node *)malloc(sizeof(node));
    s=p;
    while(*a!=-1)
    {
        if(*a%2!=0)
        {
            q->next=(node *)malloc(sizeof(node));
            q=q->next;
            q->number=*a;
            a++;
        }
        else
        {
            p->number=*a;
            p->next=(node *)malloc(sizeof(node));
            p=p->next;
            a++;
        }
    }
    q->next=s;
    p->next=NULL;
}
void write_list(void)
{
    node *p;
    p=head->next;
    while(p->next!=NULL)
    {
        printf("\n%d",p->number);
        p=p->next;
        }
}
int main()
{
    int *a;
    int i=0;
    a=(int *)malloc(sizeof(int));
   
   while(*(a+i-1)!=-1)
    {
        scanf("%d",(a+i));
        i++;
        a=(int *)realloc(a,(i+1)*sizeof(int));
    }
    create_list(a);
    write_list();
}
// pointer la  dinamik bellek mantığını unutma dizi gibi ilerletip başlangıç adresini değiştirmezsin :)
