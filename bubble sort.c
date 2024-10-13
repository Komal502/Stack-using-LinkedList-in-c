#include<stdio.h>
int main()
{
    int arr[30],size;
    printf("Enter array size");
    scanf("%d",&size);
    printf("\nEnter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    

    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}