#include<stdio.h>
int main()
{
    int a[30],n,mid,low,high,search,found;
    printf("Enter size of the array");
    scanf("%d",&n);
    printf("\nEnter %d elements in array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the element that you want to serach");
    scanf("%d",&search);
    low=0;
    high=n-1;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==search)
        {
            found++;
        }
        else if(a[mid]<search)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(found==0)
    {
        printf("Element is not found");
    }else{
        printf("element is found");
    }
    return 0;
}