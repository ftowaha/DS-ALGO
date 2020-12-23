#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define white 1
#define grey 2
#define black 3
int Adj[100][100],color[100],node,edge,parents[100],dis[100];
void bfs(int startingnode)
{
    for(int i=0;i<node;i++)
    {
        parents[i]=-1;
        color[i]=white;
        dis[i]=INT_MIN;
    }
    parents[startingnode]=-1;
    dis[startingnode]=0;
    queue<int>q;
    int x;
    q.push(startingnode);
    while(!q.empty())
    {
        x=q.front();
        cout<<x<<endl;
        q.pop();
        color[x]=grey;
        for(int i=0;i<node;i++)
        {
            if(Adj[i][x]==1&&color[i]==white)
            {
                parents[i]=x;
                dis[i]=dis[x]+1;
                q.push(i);
            }
        }
        color[x]=black;
    }
}
int main()
{
    int n1,n2,i;
    cin>>node>>edge;
    for(i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        Adj[n1][n2]=1;
        Adj[n2][n1]=1;
    }
    bfs(0);
    return 0;
}
