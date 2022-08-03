#include<stdio.h>
int main()
{
    int i=0;
    char a[100];
    char *p;
    p=a;
    //scanf("%s",a);
    gets(a);
    while(*(p+i)!=NULL)
    {
       *p+=i;
        i++;
    }
    printf("length of the string is:%d",i);
    return 0;

}