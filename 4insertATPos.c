#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void insertAtPos(struct node *head)
{
    struct node *newNode,*temp;
    int pos,i=1;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data:");
    scanf("%d",&newNode->data);
    printf("\nEnter The position");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
}
int main()
{
    struct node *p,*q,*head;
    int ch;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&p->data);
    head=p;
    do{
        q=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d",&q->data);
        p->next=q;
        p=q;
        printf("\nPress 1 if you want to enter data 0 otherewise");
        scanf("%d",&ch);
    }while(ch);
    p->next=NULL;
    insertAtPos(head);
    while(head!=NULL);
    {
        printf("%d->",head->data);
        head=head->next;
    }
    return 0;
}