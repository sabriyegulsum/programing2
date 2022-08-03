#include<stdio.h>
int rec(int n)
{
    if(n<0)
        n=-n;
    if(n==0)
        return 0;
    return n%10+rec((n/10));

}
int  main()
{
    int n,k;
    scanf("%d",&n);
    k=rec(n);
    printf("%d",k);

    return 0;
}