#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void delAtEnd(struct node *head){
    struct node *temp,*last;
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    last=temp->next;
    temp->next=NULL;
    free(last);

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
        printf("Press ! if u want to continue N otherwise");
        scanf("%d",&ch);
    }while(ch);
    p->next=NULL;
    delAtEnd(head);

    return 0;
}