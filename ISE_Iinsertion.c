#include<stdio.h>

int main()
{
    int n,arr[30];

    printf("Enter size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mid=n/2;
    n++;
    for(int i=n;i>mid;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[mid]=100;

    //reverse oreder
    for(int i=0,end=mid-1;i<end;i++,end--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
    }

//from last half reverse
    for(int i=mid+1,end=n-1;i<end;i++,end--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}