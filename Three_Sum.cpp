#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int lo = i + 1, hi = n - 1;
        while (lo < hi)
        {
            int current = a[i] + a[lo] + a[hi];
            if (current == target)
            {
                found = true;
                break;
            }
            else if (current < target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
        if (found)
        {
            cout << "True" << endl;
            break;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}