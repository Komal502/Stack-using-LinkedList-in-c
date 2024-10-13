#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void insertAtEnd(struct node *head)
{
    struct node *newNode,*temp;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data that u wanted to insert at End of list");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    printf("\n****************Modified node:**************");
        struct node *tempp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
}
int main()
{
    struct node *p,*q,*head;
    int ch;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&p->data);
    head=p;
    do{
        q=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d",&q->data);
        p->next=q;
        p=q;
        printf("If U want to insert again data in list press 1 otherwise 0 ");
        scanf("%d",&ch);
    }while(ch);

    p->next=NULL;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }

    insertAtEnd(head);
    return 0;
}