#include<bits/stdc++.h>
using namespace std;
#define white 1
#define grey 2
#define black 3
int Adj[100][100],color[100],edge,node;
void dfsvisited(int x)
{
    color[x]=grey;
    for(int i=0;i<node;i++)
    {
        if(Adj[i][x]==1&&color[i]==white)
        {
            dfsvisited(i);
        }
    }
    color[x]=black;
}
void dfs()
{
    for(int i=0;i<node;i++)
    {
        color[i]=white;
    }
    for(int i=0;i<node;i++)
    {
        if(color[i]==white)
            dfsvisited(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>edge>>node;
    int i,n1,n2;
    for(i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        Adj[n1][n2]=1;
        Adj[n2][n1]=1;
    }
    dfs();
    return 0;
}
