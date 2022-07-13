#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int arr[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n+i; j++)
        {
            if ((j + 1) % n != 0)
            {
                arr[i][j-i] = (j+1) % n;
            }
            else
            {
                arr[i][j-i] = n;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
