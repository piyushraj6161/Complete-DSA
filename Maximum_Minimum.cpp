#include <iostream> 
#include <climits>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of (n) : ";
    cin >> n;
    int arr[n];
    cout << "Enter any " << n << " Numbers : ";
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    int maximum_number = INT_MIN;
    int minimum_number = INT_MAX;

    for (int i = 0; i < n ; i++)
    {
        maximum_number = max(maximum_number, arr[i]);
        minimum_number = min(minimum_number, arr[i]);
    }

    cout << "MAXIMUM NUMBER : " << maximum_number << endl;
    cout << "MINIMUM NUMBER : " << minimum_number << endl;

    return 0;
}