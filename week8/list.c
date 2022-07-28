//my first code I write more than 100  :)
#include <stdio.h>
#include <stdlib.h>
struct node {
    int no;

    struct node *next; 
};
typedef struct node node;

node *createList(){
    int n,k;
    node *head, *p;
    printf("How many students in the list?");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            head=(node *)malloc(sizeof(node));
            p=head;
        }
        else{
            p->next=(node *)malloc(sizeof(node));
            p=p->next;
        }
        printf("%d.öğrencinin numarası:",(k+1)); scanf("%d",&p->no);
        
    }
    p->next=NULL;
    return head;
    
}
void traverseList(node * head)
{
    node *p;
    p=head;
    int counter=1;
    while(p!=NULL)
    {
        printf("öğrenciiii %d no = %d",counter,p->no);
        p=p->next;
        counter ++;
    }
}

node * add_node(node *head)
{
    int number;
    node *p,*q,*newnode;
    p=head;
    newnode=(node *)malloc(sizeof(node));
    printf("please enter new student no"); scanf("%d",&newnode->no);
    printf("kaç numaralı öğrenciden önce eklemek istiyorsun:"); scanf("%d",&number);
    if(p->no==number) //add beginning
    {
        newnode->next=p;
        head=newnode;
        p=head;
    }
    else
    {
        while(p->next!=NULL && p->no!=number )
        {
            q=p;
            p=p->next;
        }
        if(p->no==number)
        {
            q->next=newnode;
            newnode->next=p;
        }
        else if(p->next==NULL)
        {
            p->next=newnode;
            newnode->next=NULL;
        }
    }
    

    return head;
    

}
 node * delete_node(node *head)
    {
        node *p,*q;
        int delete_no;
        printf("which one you wanna delete?"); scanf("%d",&delete_no);
        p=head;
        if(p->no==delete_no)
        {
            head=p->next;
            free(p);
        }
        else
        {
            while(p->next!=NULL&&p->no!=delete_no)
                {
                    q=p;
                    p=p->next;
                }
                if(p->no==delete_no)
                    {
                        q->next=p->next;
                        free(p);
                    }
                else if(p->next==NULL)
                    {
                        q->next=NULL;
                        free(p);
                    }
        }
        return head;
    }


int main()
{
    node *p,*add,*delete;
    
    p=createList();
    traverseList(p);
    /*while(p!=NULL)
    {
        printf("\n%d",p->no);
        p=p->next;
    }*/
    add=add_node(p);
    int counter=1;
    while(add!=NULL)
    {
        printf("öğrenci%d=%d\n",counter,add->no);
        add=add->next;
        counter++;
    }
    delete=delete_node(p);  // burada fonksiyonun içine add i göndermeye çalıştım ama olmadı onun içinde başka bir işlem yapıyorum list oluşturmuyorum
    //ama p yi çağıdığımda önceki değişiklik hala devam ediyor silinmiyor çünkü pointlerle liste oluşturuyorum
    while(delete!=NULL)
        {
            printf("%d\n",delete->no);
            delete=delete->next;
        }

    return 0;

}