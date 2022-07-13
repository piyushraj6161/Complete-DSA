#include <iostream>
using namespace std;

int main()
{
    int n, given_sum;
    cout << "How many number : ";
    cin >> n;
    cout << "Enter the numbers : ";
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sum = ";
    cin >> given_sum;

    int j = 0;
    while (j < n)
    {
        int sum = 0;
        for (int i = j; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum == given_sum)
            {
                cout << "start index : " << j + 1 << ", last index : " << i + 1;
                break;
            }
        }
        cout << endl;
        j++;
    }
    return 0;
}