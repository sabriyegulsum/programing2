#include<stdio.h>
#include<stdlib.h>
struct list{
    int no;
    struct list *next;
};
typedef struct list list;
list *head;
void create_list(void)
{
    list *p;
    int i,j;
    printf("listeniz kaç elemanlı");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        if(j==0)
        {
            head=(list *)malloc(sizeof(list));
            p=head;
        }
        else 
        {
            p->next=(list *)malloc(sizeof(list));
            p=p->next;
        }
        printf("no:");
        scanf("%d",&p->no);
    }
    
}