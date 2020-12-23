#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *head=NULL;
struct node *temp=NULL;
void insert(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    if(head==NULL)
        head=newnode;
    else
    {
        temp=head;
        while(1)
        {
            if(newnode->data<=temp->data)
            {
                if(temp->left==NULL)
                {
                    temp->left=newnode;
                    break;
                }
                else temp=temp->left;
            }
            else
            {
                if(temp->right==NULL)
                {
                    temp->right=newnode;
                    break;
                }
                else temp=temp->right;
            }
        }
    }
}
void preorder(struct node *s)
{
    if(s==NULL)
        return;
        printf("%d\n",s->data);
    preorder(s->left);
    preorder(s->right);
}
void inorder(struct node *s)
{
    if(s==NULL)
        return;
    inorder(s->left);
    printf("%d\n",s->data);
    inorder(s->right);
}
void postorder(struct node *s)
{
    if(s==NULL)
        return;
    postorder(s->left);
    postorder(s->right);
    printf("%d\n",s->data);
}
int main()
{
    insert(50);
    insert(30);
    insert(20);
    insert(40);
    insert(70);
    insert(60);
    insert(80);
    cout<<endl<<endl;
    preorder(head);
    cout<<endl<<endl;
    inorder(head);
    cout<<endl<<endl;
    postorder(head);
    return 0;
}
