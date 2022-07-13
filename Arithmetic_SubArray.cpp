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

    int ans = 2;
    int prev_diff = arr[1] - arr[0];
    int count = 2;
    int j = 2;
    while (j < n)
    {
        if (prev_diff == arr[j] - arr[j - 1])
        {
            count++;
        }
        else
        {
            prev_diff = arr[j] - arr[j - 1];
            count = 2;
        }
        ans = max(ans, count);
        j++;
    }
    cout << "Max lenth of Arithmetic : " << ans << endl;
    return 0;
}