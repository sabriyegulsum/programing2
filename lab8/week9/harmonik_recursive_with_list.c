#include<stdio.h>
#include<stdlib.h>
struct harmonik{
    int sira;
    float eleman;
    struct harmonik *next;
};
typedef struct harmonik list;
list  *head, *p;
void add_list(float);
float harmonik(int i)
{
    float sum=0.0;
    if(i==0)
        return sum;
    else
    {
        sum=(float)1/i; //aslında son eleman
        add_list(sum);
        return (sum+harmonik(i-1));
    }
}
void add_list(float sum)
{
    static int counter=1;
    if(counter==1)
    {
        head=(list *)malloc(sizeof(list));
        p=head; 
        p->eleman=sum;
        p->sira=counter;
        counter++;
        printf("\n%d.sıra   eleman:%f",p->sira,p->eleman);
    }
    else
    {
        p->next=(list *)malloc(sizeof(list));
        p=p->next;
        p->eleman=sum;
        p->sira=counter;
        counter++;
        printf("\n%d.sıra   eleman:%f",p->sira,p->eleman);
    }
    if(sum==1)
        p->next=NULL;
}
int main()
{
    int i;
    float sonuc;
    printf("harmonik sayı dizisi kaç elemanlı olsun?");
    scanf("%d",&i);
    sonuc=harmonik(i);
    printf("SONUÇ=%f",sonuc);
    return 0;
}