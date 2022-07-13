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
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
           max_sum = max(max_sum, sum);
        }
    }
    cout<<"Maximum sum of subarray = "<<max_sum<<endl;
    return 0;
}