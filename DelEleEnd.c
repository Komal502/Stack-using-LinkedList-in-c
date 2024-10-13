#include<stdio.h>
int main()
{
    int a[4],size;
    printf("Enter size of the array");
    scanf("%d",&size);
    printf("\nEnter Elements in Array");
    for(int i=0 ;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    size--;
    printf("Modified Array");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);      
    }

    return 0;
}
