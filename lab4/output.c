#include<stdio.h>
int f(int ,int *,int **);
int main()
{
    int x,*px,**ppx;
    x=4;
    px=&x;
    ppx=&px;
    printf("%d",f(x,px,ppx));  //pointer işaretlerini koyarak atarsak ne olur
    printf("\n%d",x);
    return 0;
}
int f(int x,int *px,int **ppx)
{
    **ppx+=1;
    printf("after **ppx+=1:%d\n",**ppx);
    x=*px * **ppx;
    printf("after x=*px * **ppx:%d\n",x);
    *px*=2;
    printf("after *px *=2:%d\n",*px);
    x*=*px+3;
    printf("after x*=*px+3:%d\n",x);
    return (x+*px+**ppx);
}