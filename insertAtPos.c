#include <stdio.h>
int main()
{
    
    int arr[100],size,pos,ele;
    
    printf("Enter size of an array:");
    scanf("%d",&size);
    printf("\nEnter %d elements in array:",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter position that is where u wan to insert a ne element");
    scanf("%d",&pos);
    printf("\nEnter element that you wanted to insert at position given by you");
    scanf("%d",&ele);
    size++;
    
    for(int i=size-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;

    printf("Modifying Array");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}