#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number : ";
    cin >> n;
    cout<<"Enter the numbers : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int a = arr[1],b = arr[0];
    for (int i = 1; i < n; i++)
    {
         while (b != 0)
        {   
            int remainder = a % b;
            a = b;
            b = remainder;
        }
         b = arr[i+1];
    }
   cout << "HCF = " << a << endl;
    return 0;
}