#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void display(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        printf("->");
        ptr=ptr->next;
    }
}

struct node* s;
char ch;
int main()
{
    struct node *p,*q;
    p=(struct node*)malloc(sizeof(struct node*));
    printf("Enter a new node");
    scanf("%d",&p->data);

    s=p;
    do{
        q=(struct node*)malloc(sizeof(struct node*));
        printf("Enter the new node");
        scanf("%d",&q->data);
        p->next=q;
        p=q;

        printf("Press Y yo add new node\n");
        scanf("%s",&ch);
    }while(ch=='y' || ch=='y');

    p->next=NULL;

    // while(s!=NULL)
    // {
    //     printf("->");
    //     printf("%d",s->data);
    //     s=s->next;
    // }
    display(s);
    return 0;
}