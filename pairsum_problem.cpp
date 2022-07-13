#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << "indexs : " << low << ", " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "How many number : ";
    cin >> n;
    cout << "Enter the numbers in shorted form : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the sum of pair : ";
    cin >> k;
    cout << pairsum(arr, n, k) << endl;
    return 0;
}