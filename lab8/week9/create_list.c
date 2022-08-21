#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct person{
        int no;
        char name[10];
        struct person *next;
    };
    typedef struct person insan;
    insan *head;
    head=(insan *)malloc(sizeof(insan));
    
}