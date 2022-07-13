#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float arr_p[n];
    float arr_w[n];
    float arr[n], arr1[n];
    float cap, profit = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr_w[i] >> arr_p[i];
        arr[i] = arr_p[i] / arr_w[i];
        arr1[i] = arr_p[i] / arr_w[i];
    }
    cin >> cap;
    sort(arr, arr + n, greater<float>()); // stl

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr1[j])
            {
                if (cap >= 0)
                {
                    profit = profit + (arr[i] * arr_w[j]);
                    cap = cap - arr_w[j];
                }
                break;
            } 
        }
        if (cap < 0)
        {
            profit = profit - (arr[i] * arr_w[j]) +(cap+arr_w[j])*arr[i];
            break;
        }
    }
    cout << "Max profit = " << profit << endl;
    return 0;
}