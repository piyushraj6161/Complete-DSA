#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many number : ";
    cin >> n;
    cout << "Enter the numbers : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cumulative_sum[n + 1];
    cumulative_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cumulative_sum[i] = cumulative_sum[i - 1] + arr[i - 1];
    }
    int max_sum = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cumulative_sum[i] - cumulative_sum[j];
            max_sum = max(sum, max_sum);
        }
    }
    cout << "Maximum sum of subarray = " << max_sum << endl;
    return 0;
}