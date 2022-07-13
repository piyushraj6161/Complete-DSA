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
    int n, m;    // n->number of nodes, m->no of edges
    cin >> n >> m;
    vvi adj_matrix(n + 1, vi(n + 1, 0));
    vvi adj_list(n+1);
    rep(i, 0, m)
    {
        int x, y;  // edges between adjacent node
        cin >> x >> y;
        adj_matrix[x][y] = 1;
        adj_matrix[y][x] = 1;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    cout << "Adjacency matrix of above graph " << endl;
    rep(i, 1, n + 1)
    {
        rep(j, 0, n )
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Adjacency list of above graph " << endl;
    rep(i, 1, n + 1)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj_list[i].size(); j++)
        { 
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
