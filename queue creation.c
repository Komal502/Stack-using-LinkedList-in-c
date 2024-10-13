#include<stdio.h>
#define MAX 5
int myQueue[MAX];
int R=-1;
int F=-1;
void enqueue();
void dequeue();
void display();

int main()
{
    int ch;
    

    while(ch!=4){
        printf("1.PUSH\n2.Pop\n3.Display\n4.exit");
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            default:
            printf("\nPlease enter valid choice...!");
            break;
        }
    
    }
}
void enqueue()
{
    int item;
    printf("\nEnter data:");
    scanf("%d",&item);
    if(R==MAX-1)
    {
        printf("\nStack overflow...!");
    }
    if(F==-1 && R==-1)
    {
        F=0;
        R=0;
    }else{
        R++;
        myQueue[R]=item;
        printf("\nInserted Successfully...!");
    }
}

void dequeue()
{
    int item;
    if(F==-1 || F>R)
    {
        printf("\nUnderflow...!");
    }else
    {
        item = myQueue[F];
        F++;
        printf("\nDeleted...!");
    }
        if(F==R)
        {
            F=-1;
            R=-1;
        }else{
            printf("\nDeleted...!");
        }
}


void display()
{
    int i;
    if(R==-1)
    {
        printf("\nEmpty.....!");
    }else{
        printf("\n!......Values....!");
        for(int i=F;i<=R;i++)
        {
            printf("%d\n",myQueue[i]);
        }
    }
}