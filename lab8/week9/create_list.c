#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person{
        int no;
        char name[10];
        struct person *next;
    };
    typedef struct person insan;
insan * create_list(insan *head)
{
    insan *p;
    int i,k;
    printf("listeniz kaç elemanlı olsun?");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        if(i==0)
        {
            head=(insan *)malloc(sizeof(insan));
            p=head;
        }
        else
        {
            p->next=(insan *)malloc(sizeof(insan));
            p=p->next;
        }
        printf("%d. kişi için no ve name giriniz:",i+1);
        scanf("%d",&p->no);
        scanf("%s",p->name);
    }
    p->next=NULL;
    return head;

}
void write_list(insan *head)
{
    insan *p;
    p=head;
    while(p!=NULL)
    {
        printf("\n%d\t",p->no);
        printf("%s",p->name);
        p=p->next;
    }
   
}
void add_list(insan **head)
{
    int i;
    insan *p,*q,*newnode;
    newnode=(insan *)malloc(sizeof(insan));
    printf("yeni elaman için no ve isim giriniz");
    scanf("%d",&newnode->no);
    scanf("%s",newnode->name);
    p=*head;
    printf("hangi sıraya eklemek istiyorsun:");
    scanf("%d",&i);
    if(p->no==i)   //head ilk başa eklenecekse
    {
       
        newnode->next=p;
        *head=newnode;
    }
    else
    {
        while(p->next!=NULL && p->no!=i)
        {
            q=p;
            p=p->next;
        }
        if(p->no==i)
        {
            q->next=newnode;
            newnode->next=p;
        }
        else    
        {
            p->next=newnode;
            newnode->next=NULL;
        }
    }
}
void delete_list(insan *head)
{
    int i;
    insan *p,*q;
    p=head;
    printf("silmek istediğiniz elemanı giriniz");
    scanf("%d",&i);
    if(p->no==i)
    {
        head=p->next;
        free(p);
    }
    else
    {
        while(p->no!=i && p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        if(p->no==i)
        {
            q->next=p->next;
            free(p);
        }
        else
        {
            q->next=NULL;
            free(p);
        }
    }
    

}
void en_uzun_bul(insan *head)
{
    insan *en_uzun,*p;
    p=head;
    en_uzun=p;
    while(p!=NULL)
    {
        if(strlen(p->name)>=strlen(en_uzun->name))
            en_uzun=p;   // iki string direk eşitlenmez
        p=p->next;
    }
    printf("\nen uzun isim:%s",en_uzun->name);
}

int main()
{
    int key;

    insan *head,*p,**k;
    //eğer adresste değişiklik yapıyorsan o zaman *head in adresi değişmez yani o değer call by value kükmündedir
    //ya bu adresi return edersin yada o adresi işaret edersin.
    //yani head in ilk adresi değişti o zaman mainde bunu tekrardan elde edemezsin **k yada return lazımm ki aşağıda o adresi bilsin
    k=&head;
    printf("1-create list\n2-write list\n3-delete list\n4-add list\n5-en uzunu bul");
    scanf("%d",&key);
    while(key!=-1)
    {
        switch(key)
        {
            case 1: head=create_list(head);break ;
            case 2: write_list(head);break;
            case 3: delete_list(head);break;
            case 4: add_list(k); break;
            case 5: en_uzun_bul(head); break;
        }
        scanf("%d",&key);
    }
    

    return 0;

}