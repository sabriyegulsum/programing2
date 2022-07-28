#include <stdio.h>
#include <stdlib.h>
void Fun1(int *array,int leftindex, int rightindex);
void swap(int *array,int leftindex, int rightindex);
int main()
{
    int studentnumber[10]={2,0,1,0,2,1,3,0,5,1};
    int i=10,k;
   //printf("\nplease enter your studend number then press enter button:");
   /* while (1)
    {
        readnum=getchar();
        if(readnum=='\0') break;
        putchar(readnum);
        studentnumber[i]=(int)(readnum-'0');
        i++;
    }*/
    Fun1(studentnumber,0,(i-1));
    printf("\nthe array after fun 1");
    for(k=0;k<i;k++)
    {
        printf("%d",studentnumber[k]);
        
    }
    return 0;
    
}

void swap(int *array,int leftindex, int rightindex)
{
    int temp;
    if(array[leftindex]<array[rightindex])
    {
        temp=array[leftindex];
        array[leftindex]=array[rightindex];
        array[rightindex]=temp;
    }
    
}
void Fun1(int *array,int leftindex, int rightindex)
{
    if(leftindex<rightindex)
    {
        swap(array,leftindex,rightindex);
        Fun1(array,leftindex+1,rightindex-1);
    }
}