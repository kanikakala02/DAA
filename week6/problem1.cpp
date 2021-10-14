#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int>*g,int src,bool *visited,int dest)
{
    static int flag=0;
    visited[src]=true;
    for(auto i:g[src])
    {
        if(i==dest)
        {
            cout<<"yes path exists";
            flag=1;
            return;
        }
        if(!visited[i])
         dfs(g,i,visited,dest);
    }
    if(flag==0)
     cout<<"path does not exist";
}
int main()
{
    int v,e,i,src,dest;
    cout<<"enter the number of vertices ";
    cin>>v;
    vector <int> g[v+1];
    bool visited[v+1];
    cout<<"enter the number of edges ";
    cin>>e;
    cout<<"enter the vertices pair that are connected ";
    for(i=0;i<e;i++)
    {
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
    }
    cout<<"enter the source and destination node ";
    cin>>src>>dest;
    for(i=1;i<=v;i++)
     visited[i]=false;
    for(i=1;i<=v;i++)
    {
        if(!visited[i])
         dfs(g,src,visited,dest);
    }
}