#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insertATFirst(struct node *head)
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the new data");
    scanf("%d",&newNode->data);
        newNode->next=head;
        head=newNode;

        printf("\n****************Modified node:**************");
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
}
struct node* head;
int main()
{
    struct node *p,*q;
    char ch;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data");
    scanf("%d",&p->data);
    head=p;
    do{
        q=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter node data");
        scanf("%d",&q->data);
        p->next=q;
        p=q;
        printf("\nIf u want to insert again then press Y otherwise N");
        scanf("%s",&ch);
    }while(ch =='Y' || ch =='y');
   p->next=NULL;
   struct node *temp;
   temp=head;
   while(temp!=NULL)
   {
    printf("%d->",temp->data);
    temp=temp->next;
   }

//    printf("Enter element that u wantedt to insert at biginning:");
//    scaf("%d",&new->data);
    insertATFirst(head);
    return 0;
}