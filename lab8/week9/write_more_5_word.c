// isim 5 harften fazla ise yazdıran fonksiyon :)
#include<stdio.h>
#include<stdlib.h>
struct list{
    char name[10];
    struct list *next;
};
typedef struct list person;
person *head;
void fun(void);
void create_list(void)
{
    person *p;
    int i,j;
    printf("listedeki eleman sayısını giriniz:");
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
void fun(void)
{
    person *p;
    int i=0;
    p=head;
    while(p!=NULL)
    {
        while(p->name[i]!='\0')
        {
            i++;
        }
        if(i>5)
            printf("\n%s",p->name);
        i=0;
        p=p->next;
    }
}
int main()
{
    create_list();
    fun();
    return 0;
}