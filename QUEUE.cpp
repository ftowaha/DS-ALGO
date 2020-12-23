#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    int A[5+1];
    int head,tell;
}qeue;
void enqeue(qeue *q,int x)
{
    if((q->tell+1)%(5+1)==q->head)
    {
        printf("Qeue is Full\n");
        return;
    }
    else
    {
        q->A[q->tell]=x;
        q->tell=(q->tell+1)%(5+1);
    }
}
void deqeue(qeue *q)
{
    if(q->head==q->tell)
    {
        printf("Qeue is empty\n");
        return;
    }
    else
    {
        printf("%d\n",q->A[q->head]);
        q->head=(q->head+1)%(5+1);
    }
}
int main()
{
    int i,x;
    qeue q;
    q.head=0;
    q.tell=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&x);
        enqeue(&q,x);
    }
    for(i=0;i<6;i++)
    {
        deqeue(&q);
    }
    return 0;
}
