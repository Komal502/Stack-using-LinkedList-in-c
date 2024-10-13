#include <stdio.h>
int main()
{
    
    int arr[100],size;
    printf("Enter size of an array:");
    scanf("%d",&size);
    printf("\nEnter %d elements in array:",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    size++;
    for(int i=size;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=90;
    
    printf("Modifying Array");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}