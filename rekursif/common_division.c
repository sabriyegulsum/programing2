#include<stdio.h>
int commonDivision(int x,int y,int a)
//i added third parametres casuse second parametres must divide changing y 
{
    
     if(x%y==0 && a%y==0)
        return y;
    else
        return commonDivision(x,y-1,a); 
    
}
int main()
{
    int x,y,z,a;
    printf("enter two number for  common division(firstly bigger number):");
    scanf("%d%d",&x,&y);
    a=y;
    printf("1-biggest common division\n2-least common division");
    scanf("%d",&z);
    switch(z)
    {
        case 1:printf("%d",commonDivision(x,y,a)); 
            break;
        case 2:printf("%d",x*y/(commonDivision(x,y,a)));
            break;
    }
    return 0;
}