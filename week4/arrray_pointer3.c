#include<stdio.h>
int main()
{
    int i;
    //char n[ ]="sabriye";
    char *a="1234567890"; //bu bir stringdir
    //int (*b)[10]={1,2,3,4,5,6,7,8,9,0};
    char x[11];
    char *p1,*p2;
    printf("-->%s\n",a);
    //printf("%s",n);
    //yukarıdaki gibi pointerlar stirnglerel aynı özelliği
    //taşır aslında diziler ve stringler hepsi pointerdır
    p1=a;
    p2=x;
    //int k=0;
    printf("***%s",a);
    while(*p1!='\0')
    {
        printf(" \n%d",p1);
        *p2=*p1;
        p1++;
        p2++;

    }
    *p2=*p1;
    *(p2-4)='k';
    printf("\n\n for x:%s",x);
    //p2 null u alırken x in elemanı olarak almadı sonraki adrese ekledi
    // ama x[11] yaparsan x null olmuş olur
    return 0;
}