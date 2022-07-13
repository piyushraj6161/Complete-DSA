#include <iostream>
using namespace std;

int partition(int arr[], int l, int r)
{
    int pivot = arr[l];
    int i = l;
    int j = r;
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j], arr[l]);
    return j;
}

void Quick_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivot = partition(arr, l, r);
        Quick_sort(arr, l, pivot - 1);
        Quick_sort(arr, pivot + 1, r);
    }
}


int main()
{
    int n=5;
    int arr[5] = {4, 2, 1, 5, 3};
    Quick_sort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}