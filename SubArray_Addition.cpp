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
    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {

            for (int k = 0; k <= j; k++)
            {
                sum = sum + arr[k + i];
            }
        }
    }
    int   subarray;
    for (int i = 0; i < n; i++)
    {
        int subarray = 0;
        for (int j = i; j < n; j++)
        {

            subarray = subarray + arr[j];
            cout << subarray << ", ";
        }
        cout<<endl;
    }
    cout << "\nTotal sum of SubArray =  " << sum << endl;
   // cout << "\nTotal sum of SubArray =  " << subarray << endl;
    return 0;
}