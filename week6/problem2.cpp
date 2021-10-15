#include <bits/stdc++.h>
using namespace std;
vector <int> g[100];
void bfs(int *color,int curr,int src)
{
   queue <int> q;
   color[src]=curr;
   q.push(src);
   while(!q.empty())
   {
      int f=q.front();
      q.pop();
      if(color[f]==1)
       curr=2;
      else
       curr=1;
      for(auto j:g[f])
      {
          if(color[j]==0)
          {
              q.push(j);
               color[j]=curr;
          }
      }
   }
}
bool bipartite(int *color,int curr,int src,int v)
{
    bfs(color,curr,src);
    int i;
    for(i=1;i<=v;i++)
    {
        for(auto j:g[i])
        {
            if(color[j]==color[i])
            return false;
        }
    }
     return true;
}
int main()
{
    int v,e,i;
    cout<<"enter the number of vertices ";
    cin>>v;
    cout<<"enet rthe number of edges ";
    cin>>e;
    int color[v];
    cout<<"enter the edge list ";
    for(i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
   for(i=1;i<=v;i++)
    color[i]=0;
    
    if(bipartite(color,1,1,v))
     cout<<"bipartite";
    else
     cout<<"not bipartite";
}