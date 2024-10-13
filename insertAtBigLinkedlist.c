#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void linked_list_traversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node* insertAtFirst(struct node* first,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=first;
    ptr->data=data;
    return ptr;
}
int main()
{
    struct node*first,*second,*third;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    first->data=4;
    
}