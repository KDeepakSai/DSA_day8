#include <bits/stdc++.h>
using namespace std;

void traverse(int i, vector<int> &visited, vector<int> adj[])
{
    vis[i] = 1;
    cout << i << " ";
    for(auto u:adj[i])
    {
        if(!vis[u])
            traverse(u,vis,adj);
    }
}

void DFS(int V, vector<int> adj[])
{
    vector<int> vis(V,0);
    for(int i=0; i<V; i++)
    {
        if(!vis[i])
        {
            traverse(i,vis,adj);
            cout << endl;
        }
    }
}

int main()
{
    int N,E;
    cin >> N >> E;
    vector<int> adj[N];
    for(int i=0; i<E; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout << endl << "DFS of given graph: " << endl;
    DFS(N,adj);
}
