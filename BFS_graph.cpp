#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setbit(x) builtin_popcount(x)
const int N = 1e5 + 2, MOD = 1e9 + 7;
signed main()
{
    int n, m; // n->number of nodes, m->no of edges
    cin >> n >> m;
    vvi adj(N + 1);
    rep(i, 0, m)
    {
        int x, y; // edges between adjacent node
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool visted[N];
    for (int i = 0; i < N; i++)
    {
        visted[i] = 0;
    }
    queue<int> q,r;
    q.push(1);
    visted[1] = true;
    while (!q.empty())
    {
        int node = q.front();
        r.push(node);
        q.pop();
        cout << node << " ";
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (!visted[adj[node][i]])
            {
                visted[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    cout<<endl;
    return 0;
}
/*     input   
                 1
               /    \
              2 __    3  
            / | \  \ /
           4  5  6  7  
7 7
1 2
1 3
2 4
2 5
2 6
2 7
3 7 */