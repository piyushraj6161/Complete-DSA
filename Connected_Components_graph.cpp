#include <bits/stdc++.h>
using namespace std;

int get_comp(int indx,vector<vector<int> > adj,vector<bool> &visited)
{
    if (visited[indx])
    {
        return 0;
    }
    visited[indx] = true;
    int ans = 1;
    for (int i = 0; i < adj[indx].size(); i++)
    {
        int node = adj[indx][i];
        if (!visited[node])
        {
            ans += get_comp(node,adj,visited);
            visited[node] = true;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n);
    vector<int> components;
    vector<bool> visited(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            components.push_back(get_comp(i,adj,visited));
        }
    }
    for (int i = 0; i < components.size(); i++)
    {
        cout << components[i] << " ";
    }
    cout << endl;
    return 0;
}