#include <bits/stdc++.h>
using namespace std;

void traverse(int i, vector<int> adj[], vector<int> &vis)
{
    vis[i] = 1;
    queue<int> q;
    q.push(i);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(auto u:adj[node])
        {
            if(!vis[u])
            {
                q.push(u);
                vis[u]=1;
            }
        }
    }
}

void BFS(int V, vector<int> adj[])
{
    vector<int> vis(V,0);
    for(int i=0; i<V; i++)
    {
        if(!vis[i])
        {
            traverse(i,adj,vis);
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

    cout << endl << "BFS of given graph: " << endl;
    BFS(N,adj);
}
