#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
};

struct node *top=0;
void push(int val)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=top;
    top=newNode;
}

void pop()
{
    struct node *temp;
    temp=top;
    top=temp->next;
    free(temp);
}

void display()
{
    printf("\n--------------Display linked list--------------");
    struct node *temp;
    
    temp=top;
    if(top==0)
    {
        printf("\nEmpty...!");
    }else{
         while(temp!=0)
        {
        
        printf("\n%d",temp->data);
        temp=temp->next;
        }
    }
   
}
int main()
{
    push(2);
    push(23);
    push(10);
    display();
    pop();
    display();
    return 0;
}


