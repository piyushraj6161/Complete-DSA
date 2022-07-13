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
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
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