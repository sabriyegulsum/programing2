#include <stdio.h>
#include <stdlib.h>
struct node{
    char name[40];
    struct node *next;
};
typedef struct node node;
node * createList()
{
    node *head,*p;
    int n,k;
    printf("How many student in the list? ");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            head=(node *)malloc(sizeof(node));
            p=head;
        }
           
        else
        {
            p->next=(node *)malloc(sizeof(node));
            p=p->next; 
        }
        scanf("%s",p->name);
        
    }
    p->next=NULL;
    return head;
}