#include <stdio.h>
int main()
{
    
    int arr[100];
    int size;
    printf("Enter size of an array:");
    scanf("%d",&size);
    printf("\nEnter %d elements in array:",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    size++;
    
    arr[size-1]=90;
    
    printf("Modifying Array");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}