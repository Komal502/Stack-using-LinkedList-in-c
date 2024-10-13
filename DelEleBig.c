#include<stdio.h>
int main()
{
    int i,arr[10];
    printf("Enter 5 elements in array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i+1];
    }

    printf("Modified Array");
    for(int i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}