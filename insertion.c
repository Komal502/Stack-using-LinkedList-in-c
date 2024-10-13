#include <stdio.h>
int main()
{
    int i,size,insert,temp,end,pos,ele;
    int a[100];
    printf("Enter size of an array:");
    scanf("%d",&size);
    printf("\nEnter %d elements in array:",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\ninsert the element to insert at the beginning:");
    scanf("%d",&insert);
    printf("\nEnter the element to insert at the end:");
    scanf("%d",&end);
    size++;
    for(int i=size;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=insert;
    size++;
    a[size-1]=end;
    printf("\nEnter position that u wanted to insert elements over there:");
    scanf("%d",&pos);
    printf("Enter element that u wanted to insert in\n");
    scanf("%d",&ele);
    size++;
    for(int i=size;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;


    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}