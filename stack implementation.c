#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

void push(int value)
{
    if(top==MAX-1){
        printf("Stack Overflow\n");
        printf("--------------------------\n");
    }else{
        top++;
        stack[top]=value;
        printf("Given value successfullly pushed\n");
        printf("--------------------------\n");

    }
}

void pop()
{
    if(top==-1){
        printf("stack underflow\n");
        printf("--------------------------\n");
    }else{
        top--;
        printf("Given value successfully poped\n");
        printf("--------------------------\n");
    }
}

void display()
{
    if(top==-1){
        printf("Stack is alrady empty\n");
        printf("--------------------------\n");
    }else{
        printf("Stack element is as followed\n");
        
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
    printf("--------------------------\n");
}




int main()
{
    int inp,value;
    char ch;
    printf("This is stack implementation\n");

    do{
        printf("Press 1 for PUSH\nPress 2 for POP\nPress 3 for PRINT\n");
        printf("Your choice:");
        scanf("%d",&inp);

        switch(inp)
        {
            case 1:
            printf("Enter which value you want to push in stack");
            scanf("%d",&inp);
            push(inp);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            default:
            printf("Invalid choice\n");
        }
        printf("Do you want to continue this \n(Press y fr yes & n for NO):");
        scanf("%s",&ch);
        printf("\n");
    }while(ch=='y' || ch=='Y');

    return 0;
}