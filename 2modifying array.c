#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Orignal array");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    a[2]=10;
    a[5]=55;
    a[7]=77;
    printf("\nModified array");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}