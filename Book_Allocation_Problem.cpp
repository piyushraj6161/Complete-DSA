#include <bits/stdc++.h>
using namespace std;

bool is_Possible(vector<int> arr, int n, int m, int mid)
{
    int student_count = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            student_count++;
            if (student_count > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int Book_Allocation(vector<int> arr, int n, int m)
{
    int start = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (is_Possible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    /*
    5 3
    1 2 2 3 1     ans =4;
    */
    cout << Book_Allocation(arr, n, m) << "\n";
    return 0;
}