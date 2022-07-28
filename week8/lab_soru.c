#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct person{
        int age;
        char name[40];
    };
    struct person *ptr;
    int i,n;
    printf("enter the number of persons ");
    scanf("%d",&n);
    ptr=(struct person*)malloc(n*sizeof(struct person));
    for (i=0;i<n;++i)
    {
        printf("enter first name and age respectively: ");
        scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);
    }
    printf("displaying information:\n");
    for(i=0;i<n;++i)
        printf("Name:%s Age:%d\n",(ptr+i)->name,(ptr+i)->age);
    return 0;
}