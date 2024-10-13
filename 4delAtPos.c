#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void delAtPos(struct node *head){
    int pos,i=1;
     struct node *Del,*temp;
    printf("\nEnter the position that u wanted to delete node");
    scanf("%d",&pos);

    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    Del=temp->next;
    temp->next=Del->next;
    free(Del);
     temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
 
}
int main()
{
    struct node *p,*q,*head;
    int ch;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&p->data);
    head=p;
    do{
        q=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data: ");
        scanf("%d",&q->data);
        p->next=q;
        p=q;
        printf("\nPress 1 if u want to continue 0 otherwise");
        scanf("%d",&ch);
    }while(ch);
    p->next=NULL;
    delAtPos(head);

    return 0;
}