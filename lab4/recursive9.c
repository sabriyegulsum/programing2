#include<stdio.h> 
char f1(int b); 
int main()
{
    char a; 
    a=f1(10); 
    //printf("%c",a);
    return 0;
}
char f1(int b) 
{
    static int i=0;
    printf("%d",b);
    printf("a"); 
    if(i==5)
    {
        return 'a'; 
    }
    i++;
        
    //printf("a");
    f1(b--);
}
//sonsuz döngüye giriyor f(b--) yi çağırıyoe b azalmıyor hep aynı 
//kalıyor bunu counterla durdurduk ve b yi her seferinde aynı yazdırdı. 