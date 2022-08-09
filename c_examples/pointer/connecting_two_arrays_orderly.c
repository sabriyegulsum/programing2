// son elemanda kalıyorrr 
#include<stdio.h>
#include<stdlib.h>

int * order(int *array1, int size1, int *array2, int size2)
{
    int i=0,j=0,k=0, *result;
    result=(int *)malloc((size1+size2)*sizeof(int));

    while(k!=size1+size2)
    {
         
        
        if(*(array1+i)>*(array2+j))
        {
       
            *(result+k)=*(array2+j);
            if(j!=size2-1)
                j++;
            k++;      
        }
        else
        {
            *(result+k)=*(array1+i);
            if(i!=size1-1)
                i++;
            k++;
        }
        if(result[k-2]==array1[size1-1]|| result[k-2]==array2[size2-1])
            {
                if(result[k-2]==array1[size1-1])
                    result[k-1]=array2[size2-1];
                result[k-1]=array1[size1-1];
            }
        printf("\ni=%d j=%d  c[%d]=%d",i,j,k,*(result+k-1));
    }
    return result;

}
int main()
{
    int *array1,*array2,*ptr;
    int i,n,m;
    printf("please enter first numbers of element of array1:");
    scanf("%d",&n);
    array1=(int *)malloc(n*sizeof(int ));
    printf("please enter numbers of elements of array2:");
    scanf("%d",&m);
    array2=(int *)malloc(m*sizeof(int ));
    printf("enter elements of array1: ");
    for(i=0;i<n;i++)
        scanf("%d",array1+i);
    printf("enter elements of array: ");
    for(i=0;i<m;i++)
        scanf("%d",array2+i);
    ptr=order(array1,n,array2,m);
    
    for(i=0;i<n+m;i++)
        printf(" %d ",*(ptr+i));
    return 0;
}
//helal olsun kızım * _ * :))

