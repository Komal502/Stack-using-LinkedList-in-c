#include<stdio.h>
int main()
{
    int arr[10],size,num;
    int found=0;
    printf("Enter size of the array:");
    scanf("%d",&size);
    printf("\nEnter Array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to serach:");
    scanf("%d",&num);
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            found++;
        }
    }
    if(found!=0){
        printf("\n\nElement is found");
    }else{
        printf("Element is not found");
    }

    return 0;

}