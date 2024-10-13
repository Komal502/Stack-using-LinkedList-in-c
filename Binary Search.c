#include<stdio.h>
int main()
{
    int arr[20],size,high,low,search,mid;
    
    printf("Enter size of the array:");
    scanf("%d",&size);
    printf("\nEnter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the element that u want to search in array:");
    scanf("%d",&search);;

    low=0;
    high=size-1;
    int found=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==search)
        {
            found++;
            break;
        }
        else if(arr[mid]>search)
        {
            high=mid-1;
        }else{
            low=mid+1;
        }

    }

    if(found==0)
    {
        printf("\nElement is not found....!");
    }else{
        printf("\nElement is found");
    }

    return 0;
}