#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n);
    vector<int> indeg(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v; // edge u to v
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }
    int count = 0;
    while (!q.empty())
    {
        count++;
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (int i = 0; i < adj[x].size(); i++)
        {
            indeg[adj[x][i]]--;
            if (indeg[adj[x][i]] == 0)
            {
                q.push(adj[x][i]);
            }
        }
        // for (auto it : adj[x])
        // {
        //     indeg[it]--;
        //     if (indeg[it] == 0)
        //     {
        //         q.push(it);
        //     }
        // }
    }
    cout << endl;
    return 0;
}