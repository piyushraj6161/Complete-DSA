#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter the array : ";
    cin >> arr;
    int n = strlen(arr);
    bool check = 1;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            check = 0;
            break;
        }
    }
    if (check == 1)
    {
        cout << "Word are pallindrome\n";
    }
    else
    {
        cout << "Word are not pallindrome\n";
    }
    return 0;
}