#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{

    int starting_point = 0;
    int end_point = n;
    while (starting_point <= end_point)
    {
        int mid_point = (starting_point + end_point) / 2;

        if (key == arr[mid_point])
        {
            return mid_point;
        }
        else if (key < arr[mid_point])
        {
            end_point = mid_point - 1;
        }
        else
        {
            starting_point = mid_point + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "How many number : ";
    cin >> n;
    cout << "Enter the numbers in assecending order : "; // sorted order
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Which number to find Index : ";
    cin >> key;

    cout << "Index(start from '0') : " << binary_search(arr, n, key) << endl;
    return 0;
}