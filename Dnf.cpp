#include <iostream>
using namespace std;

void Dnf(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main()
{
    int n=9;
    int arr[] = {1,0,2,1,0,1,2,1,2};
    Dnf(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}