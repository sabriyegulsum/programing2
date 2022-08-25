#include<stdio.h>
#include<stdlib.h>
struct student{
    int not;
    char name[10];
    struct student *next;
};
typedef struct student std;
std *head;
void create_list(void)
{
    int i,j;
    std *p;
    head=(std *)malloc(sizeof(std));  //döngünün içinde değil yukarıda yer ayırdım
    printf("kaç öğrenci vardır?");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        if(j==0)
            p=head;
        else
        {
            p->next=(std *)malloc(sizeof(std));
            p=p->next;
        }
        printf("%d.öğrenci name:",j+1); scanf("%s",p->name);
        printf("not:"); scanf("%d",&p->not);
    }
    p->next=NULL;
}
void find_average(void)
{
    float ort,sum=0.0;
    int counter=0;
    std *p;
    p=head;
    while(p!=NULL)
    {
        sum+=p->not;
        p=p->next;
        counter ++;
    }
    ort=sum/counter;
    printf("\nAverage:%f",ort);
}
int main()
{
    create_list();
    find_average();
    return 0;
}