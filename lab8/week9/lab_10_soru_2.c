#include<stdio.h>
#include<stdlib.h>
struct node {
int number;
struct node * next;
};
typedef struct node node;
node *head;
node * cutlastaddhead(node* head);
void write_list(node *head);
void create_list(void)
{
    node *p;
    head=(node *)malloc(sizeof(node));
    p=head;
    int j,i;
    printf("listeniz kaç eleamnlı:");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        p->next=(node *)malloc(sizeof(node));
        p=p->next;
        printf("number:"); scanf("%d",&p->number);
    }
    p->next=NULL;
}
node * custlastaddhead(node *head)
{
    node *p,*q;
    p=head->next;
    q=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    p->next=head;
    head=p;
    return head;
}
void write_list(node *head)
{
    node *p;
    p=head;
    while(p!=NULL)
    {
        printf("\n%d",p->number);
        p=p->next;
    }
}
int main()
{
    node *p;
    create_list();
    p=cutlastaddhead(head);
    write_list(p);
    return 0;
}