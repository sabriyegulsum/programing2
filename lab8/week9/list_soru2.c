#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    struct insan{
    char name[10];
    int no;
    int mit;
    int final;
    float basari;
   struct insan *next;
};
typedef struct insan insan;
insan *head;
void create_list(insan *head)
{
    insan *p;
    p=head;
    int a,i;
    printf("kaç öğrenciniz var?");
    scanf("%d",&a);
    for(i=0;i<a;i++)
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
        printf("%d.öğrenci name:",i+1);scanf("%s",p->name);
        printf("no:");scanf("%d",&p->no);
        printf("mit no:");scanf("%d",&p->mit);
        printf("final:");scanf("%d",&p->final);
        p->basari=((p->mit*0.4)+(p->final*0.6));

    }
    p->next=NULL;

}
void write_list(insan *head)
{
    insan *p;
    p=head;
    while(p!=NULL)
    {

        printf("\nno:%d\t%s",p->no,p->name);
        printf("\t\tbasarı notu:%f",p->basari);
        p=p->next;
    }

}
void kayit_ekle(void)
{
    int a;
    insan *newnode,*p,*q;
    p=head;
    q=p;
    newnode=(insan *)malloc(sizeof(insan));
    printf("eklemek istediğiniz öğrencinin bilgilerini giriniz:\nname:");
    scanf("%s",newnode->name);
    printf("no:");scanf("%d",&newnode->no);
    printf("mit notu:");scanf("%d",&newnode->mit);
    printf("final notu:");scanf("%d",&newnode->final);
    newnode->basari=((newnode->mit*0.4)+(newnode->final*0.6));
    printf("hangi siraya eklemek istiyorsunuz?");scanf("%d",&a);
    if(p->no==a)
    {
        newnode->next=p;
        head=newnode;
    }
    else
    {
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
            if(p->no==a) break;
        }
        if(p->no==a)
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
}
void kayit_sil(void)
{
    insan *q,*p;
    p=head;
   
    char ad[10];
    printf("kimi silmek istiyorsunuz?");
    scanf("%s",ad);
    if(strcmp(p->name,ad)==0)
    {
        head=p->next;  
        free(p); 
    }
    else
    {
        while(p->next!=NULL)
        {   
            if(strcmp(p->name,ad)==0) break;  
            else
            {
                q=p;
                p=p->next;
            }
        }
            if(strcmp(p->name,ad)==0)
            {
                q->next=p->next;        
                free(p);
            }
            else if(p->next==NULL)
                printf("silinecek eleman yoktur");
    }
    
}
void sinifin_basari_notu(void)
{
    float ort=0,sum=0,counter=0;
    insan *p;
    p=head;
    while(p!=NULL)
    {
        sum+=p->basari;
        p=p->next;
        counter++;
    }
    ort=sum/counter;
    printf("\nsınıf ortalaması=%f",ort);
}
void en_basarili(void)
{
    float ort,max;
    insan *p,*q;
    p=head;
    q=p;
    max=p->basari;
    while(p!=NULL)
    {
        if(p->basari>max)
        {
            max=p->basari;
            q=p;                //en başarılı olanın bilgilerini q ile tutuyorum
            p=p->next;
        }
        else
            p=p->next;
    }
    printf("en başarılı öğrenci bilgileri:\nname:%s  no:%d    ortalama:%f",q->name,q->no,q->basari);
}
int main()
{
    int i;
    
    create_list(head);
    printf("1-liste yazdır\n2-kayıt ekle\n3-kayıt sil\n4-sınıfın başarı ortalaması\n5-en başarılı\n6-çıkış");
    scanf("%d",&i);
    while(1)
    {
        switch(i)
        {
            case 1:write_list(head);break;
            case 2:kayit_ekle();break;
            case 3:kayit_sil();break;
            case 4:sinifin_basari_notu();break;
            case 5:en_basarili(); break;
            case 6: exit(0);break;
        
        }
        if(i==6)
            break;
        scanf("%d",&i);
    }
return 0;
}
//create void yaptım --->> globaldaki bir pointere onu kullandığımda yine aynı yerde kalıcaktır
//eklemiyor---listeyi yazdırmıyor