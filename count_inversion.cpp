#include <iostream>
using namespace std;

int merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int a[n1], b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = start;
    int count_inversion = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            count_inversion += n1 - i;
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return count_inversion;
}

int merge_sort(int arr[], int start, int end)
{
    int count_inversion = 0;
    if (start < end)
    {
        int mid = (start + end) / 2;
        count_inversion += merge_sort(arr, start, mid);
        count_inversion += merge_sort(arr, mid + 1, end);
        count_inversion += merge(arr, start, mid, end);
    }
    return count_inversion;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "count inversion = " << merge_sort(arr, 0, n - 1) << endl;

    return 0;
}