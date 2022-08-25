#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10];
    int not;
    struct student * next;
};
typedef struct student ogr;
ogr *head;
void create_list(void)
{
    int i,j;
    ogr *p;

    printf("sınıf mevcudunu giriniz:");
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
        printf("%d.öğrenci adı:",j+1); scanf("%s",p->name);
        printf("not:"); scanf("%d",&p->not);
    }
    p->next=NULL;
}
float find_average(void)
{
    float sum=0.0,ort;
    int counter=0;
    ogr *p;
    p=head;
    while(p!=NULL)
    {
        sum+=p->not;
        counter++;
        p=p->next;
    }
    ort=sum/counter;
    return ort;
}
void best_student(void)
{
    ogr *p,*q;
    float ort;
    p=head;
    q=head;
    ort=find_average(); //bu gereksiz farkındayım ama fonksiyonunu yazınca döngü sayısını azaltıyım dedim ortalamayı geçemeyen zaten best olamaz
    while(p!=NULL)
    {
        if(p->not < ort)
        {
            p=p->next;
            continue;
        }
            
        else
        {
            if(p->not > q->not)
                q=p;
            p=p->next;
        }
    }
    printf("--->> en başarılı öğrenci <<---\n\tname:%s\n\tno:%d\n\tsınıfın ortalaması:%f",q->name,q->not,ort);

}
int main()
{
    create_list();
    best_student();
    return 0;
}