#include<stdio.h>
#include<stdlib.h>
struct student{
    int not;
    char name[10];
    struct student *next;
};
typedef struct student ogr;
void write_list(void);
void delete(void);
ogr *head;
void create_list(void)
{
    ogr *p;
    int i,j;
    printf("listede kaç öğrenci var?");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        if(j==0)
        {
            head=(ogr *)malloc(sizeof(ogr));
            p=head;
        }
        else
        {
            p->next=(ogr *)malloc(sizeof(ogr));
            p=p->next;
        }
        printf("isim:"); scanf("%s",p->name);
        printf("no:"); scanf("%d",&p->not);
        
    }
    p->next=NULL;
}

void delete(void)
{
    float ort,sum=0.0;
    int counter=0;
    ogr *p,*q;
    p=head;
    q=p;
    while(p!=NULL)
    {
        sum+=p->not;
        counter++;
        p=p->next;

    }
    ort=sum/(float)counter;
    printf("\nortalama:%0.f",ort);
    p=head;
    while(p!=NULL)
    {
        if(p->not<ort)
        {
            if(p==head)
            {
                head=head->next;
                free(p);
                p=head;
                q=head;
            }
            else
            {
                q->next=p->next;
                free(p);
                p=q->next;
            }
        }
        else
        {
            q=p;
            p=p->next;
        }
    }
}
void write_list(void)
{
    ogr *p;
    p=head;
    while(p!=NULL)
    {
        printf("\n%s:%d",p->name,p->not);
        p=p->next;
    }

}
int main()
{
    create_list();
    write_list();
    delete();
    write_list();
    return 0;
}

