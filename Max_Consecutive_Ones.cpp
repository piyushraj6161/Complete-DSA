#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int zero_count = 0, i = 0, ans = 0; 
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            zero_count++;
        }
        while (zero_count > k)
        {
            if (a[i] == 0)
            {
                zero_count--;
            }
            i++;
        }
        ans = max(ans, j - i + 1);
    }
    cout << ans << endl;
    return 0;
}