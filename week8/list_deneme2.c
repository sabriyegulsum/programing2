#include <stdio.h>
#include<stdlib.h>
struct node{  //structımı globalda oluştururum fonksiyonlarda kullanabilsin :)
    char name[40];
    int no;
    struct node *next;   //p->next dediğim bu yani structin içindeki pointeri bağlamak için kullanırım
};
typedef struct node node;
node *head,*p;
node * createList ()
{
    int k,n;
   
    printf("How many students in the list?");
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
        printf("Please enter %d.student name:",(k+1));
        scanf("%s",p->name);   //bunları konuşmayalım artık gülsüm string X & X
        printf("Please printf %d.student no:",(k+1));
        scanf("%d",&p->no);

    } 
    p->next=NULL;
    return head;
}  

        int main()
{
    node *head;
    head=createList();
    printf("deneme");
    while(p->next!=NULL)
    {
        
        printf("%s\n",p->name);
        printf("%d",p->no);
        p=p->next;
    }
    return 0;
    
}