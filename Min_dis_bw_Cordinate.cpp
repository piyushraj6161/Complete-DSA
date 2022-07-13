#include <bits/stdc++.h>
using namespace std;

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > points;
    float min_distance = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }
    for (int i = 0; i < n; i++)
    {
        int x, y;
        x = points[i].first;
        y = points[i].second;
        for (int j = i + 1; j < n; j++)
        {
            int p, q;
            p = points[j].first;
            q = points[j].second;
            min_distance = min(min_distance, distance(x, y, p, q));
        }
    }
    cout << "min_distance : " << min_distance << endl;
    return 0;
}