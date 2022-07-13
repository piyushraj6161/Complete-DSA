#include <iostream>
using namespace std;

void Count_sort(int arr[], int n)
{
    int maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
    }
    int a[maximum];
    for (int i = 0; i <= maximum; i++)
    {
        int count = 0, j = 0;
        while (j < n)
        {
            if (arr[j] == i)
            {
                count++;
            }
            j++;
        }
        if (i == 0)
        {
            a[i] = count;
        }
        else
        {
            a[i] = a[i - 1] + count;
        }
    }
    int b[9];
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= maximum; j++)
        {
            if (arr[i] == j)
            {
                a[j] -= 1;
                b[a[j]] = arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int n = 9;
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    Count_sort(arr,n);
    return 0;
}