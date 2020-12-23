#include<bits/stdc++.h>
using namespace std;
#define STACK_MAX 10
typedef struct
{
    int top;
    int data[STACK_MAX];
}stack;
void push(stack *s,int item)
{
    if(s->top<STACK_MAX)
    {
        s->data[s->top]=item;
        s->top++;
    }
    else printf("STACK is full\n");
}
int pop(stack *s)
{
    if(s->top==0)
        printf("STACK is NULL\n");
    else
    {
        s->top--;
        printf("%d\n",s->data[s->top]);
    }
}
int main()
{
    stack stck;
    stck.top=0;
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    push(&stck,1);
    printf("------------\\\\------------\n");
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    pop(&stck);
    return 0;
}
