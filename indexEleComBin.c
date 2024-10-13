#include<stdio.h>
int main()
{
    int l,h,mid,found=0,arr[10]={0,2,1,3,10,9,7,8,9,10};
    // printf("Enter Size:");
    // scanf("%d",&n);

    // printf("\nEnter sorted %d elements:",n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }


    l=0;
    h=10-1;
    mid=(l+h)/2;
    while(10>=l)
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