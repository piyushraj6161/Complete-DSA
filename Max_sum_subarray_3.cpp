#include<iostream>
using namespace std;

int main(){                             // must be maximum positive number in array
     int n;
    cout << "How many number : ";
    cin >> n;
    cout << "Enter the numbers : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cumulative_sum=0;
    
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cumulative_sum= cumulative_sum + arr[i];
        if(cumulative_sum<0){
            cumulative_sum =0;
        }
        max_sum = max(max_sum, cumulative_sum);
    }
     cout << "Maximum sum of subarray = " << max_sum << endl;
    
    return 0;
}