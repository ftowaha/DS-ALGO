#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void printlist()
{
    current=head;
    while(current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
}
void deletefirst()
{
    printf("%d\n",head->data);
    head=head->next;
}
void insertfirst(int x)
{
    struct node *link=(struct node*)malloc(sizeof(struct node));
    link->next=head;
    link->data=x;
    head=link;
}
void insertlast(int x)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node* t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=newnode;
    }
}
void delet(int x)
{
    if(x==1)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
    else
    {
        struct node* t=head;
        for(int i=1;i<x-1;i++)
            t=t->next;
        struct node* t1=t->next;
        printf("%d\n",t1->data);
        t->next=t1->next;
    }
}
int main()
{
    insertlast(1);
   insertlast(2);
   insertlast(3);
   deletefirst();
   deletefirst();
   deletefirst();
   printf("\n\n");
    insertfirst(1);
   insertfirst(2);
   insertfirst(3);
   insertfirst(4);
   insertfirst(5);
   insertfirst(6);
   printlist();
   printf("\n\n");
   deletefirst();
   deletefirst();
   deletefirst();
   deletefirst();
   deletefirst();
   deletefirst();
   printf("\n\n");
   printlist();
   insertfirst(1);
   insertfirst(2);
   insertfirst(3);
   insertfirst(4);
   insertfirst(5);
   insertfirst(6);
   delet(2);
   delet(2);
   delet(2);
    return 0;
}
