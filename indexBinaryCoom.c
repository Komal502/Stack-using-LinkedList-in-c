#include<stdio.h>
int main()
{
    int arr[20],l,h,n,mid,found=0;
    printf("Enter Size:");
    scanf("%d",&n);

    printf("\nEnter sorted %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // int search;
    // printf("Enter element that you wanted to search");
    // scanf("%d",&search);

    l=0;
    h=n-1;
    mid=(l+h)/2;
    while(n>=l)
    {
        if(arr[mid]==mid)
        {
            found++;
            printf("\nElement is founded");
            break;
        }
        else if(arr[mid]<mid)
        {
            l=mid++;
        }else{
            h=mid-1;
        }
    }

    if(found==1)
    {
        printf("\n%d element is equal to %d index",arr[mid],mid);
    }else{
        printf("Not any element which can be match in this array");
    }
}