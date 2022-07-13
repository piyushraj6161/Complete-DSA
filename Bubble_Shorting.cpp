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
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // int temp = arr[i];
                // arr[i] = arr[i + 1];
                // arr[i + 1] = temp;
                swap(arr[i],arr[i+1]);
            }
        }
        count++;
    }

    cout << "Shorted Array(Assending order) : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    cout << "Shorted Array(Decending order) : " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;
}