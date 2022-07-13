#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(currentsum, maxsum);
    }
    return maxsum;
}

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
    int wrapsum;
    int nonwrapsum = kadane(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadane(arr, n);

    cout << "Circular max subarray sum = " << max(wrapsum, nonwrapsum) << endl;
    return 0;
}