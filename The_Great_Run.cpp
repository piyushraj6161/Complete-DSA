#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll z = 0, p = n - k + 1, sum[p];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i < p)
            {
                sum[i] = 0;
            }
        }

        while (z < p)
        {
            for (int i = z; i < z + k; i++)
            {
                sum[z] += arr[i];
            }
            z++;
        }
        cout << *max_element(sum, sum + p) << "\n";
    }
    return 0;
}