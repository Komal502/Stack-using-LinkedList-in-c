#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

char stack[MAX];
int top=-1;

void push(char value){
    if(top==MAX-1)
    {
        printf("Stack Overflow");
        printf("-------------------------------------\n");
    }else{
        top++;
        stack[top]=value;
    }
}

char pop()
{
    if(top==-1){
        printf("stack underflow");
        printf("-------------------------------------\n");
    }else{
        return stack[top--];
    }
}

int main()
{
    char string[10]="ISRO";
    char revString[10]="";

    for(int i=0;i<strlen(string);i++){
        char ch=string[i];
        push(ch);
    }

    printf("Your stack elements are:\n");
    puts(stack);

    for(int i=0;i<strlen(string);i++)
    {
        
        revString[i]=pop();
    }
    printf("Your stack elements are:\n");
    puts(revString);
    return 0;
}