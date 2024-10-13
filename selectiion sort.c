#include<stdio.h>
int main()
{
    int arr[30],size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

    printf("\nYour sorted array:");
    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
} 