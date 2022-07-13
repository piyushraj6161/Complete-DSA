#include <iostream>
using namespace std;

bool SortedArray(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool rest_array = SortedArray(arr + 1, n - 1);
    return (arr[0] < arr[1] && rest_array);
}

int main()
{
    int arr[] = {1, 2, 3, 6, 5};
    cout << SortedArray(arr, 5) << endl;
    return 0;
}