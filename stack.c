#include<stdio.h>
#define MAX 100
int stack[MAX],Top=-1;
int push();
int  pop();
int print();
int main()
{
    int choice,c=0,d=0,ch;
    printf("Enter 1 for push()");
    printf("\nEnter 2 for pop()");
    printf("\nEnter 3 for print()");
    printf("\nEnter 4 for exit()");

    do{
        print("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            c++;
            break;
            case 2:
            pop();
            d++;
            break;
            case 3:
            exit();
            default:
            printf("Enter Valid choice....!");
        }
        printf("\nEnter y if u want to continue...!");
        scanf("%d",&ch);
    }while(ch=='y');
    return 0;
}