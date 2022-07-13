#include <bits/stdc++.h>
using namespace std;

bool is_cycle(int src, vector<vector<int> > &adj, vector<bool> &visted, int parent)
{
    visted[src] = true;
    for (int i = 0; i < adj[src].size(); i++)
    {
        if (adj[src][i] != parent)
        {
            if (visted[adj[src][i]])
            {
                return true;
            }
            else
            {
               is_cycle(adj[src][i], adj, visted, src);
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n);
    int node;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v; // edge u to v
        adj[u].push_back(v);
        adj[v].push_back(u);
        node=adj[u][0];
    }
    vector<bool> visted(n, false);
    
    if (is_cycle(node, adj, visted, -1))
    {
        cout << "Cycle is Present";
    }
    else
    {
        cout << "Cycle is not Present";
    }
    cout << endl;
    return 0;
}