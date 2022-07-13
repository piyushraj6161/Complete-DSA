#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of square matrix(NxN) : ";
    cin >> n;
    int arr[n][n];
    //int arr[3][3]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    int numb = 1;
    int i = n / 2, j = n - 1;
    while (numb <= n * n)
    {
        arr[i][j] = numb;
        i -= 1, j += 1;
        if (i == -1 && j == n)
        {
            i = 0, j = n - 2;
            numb++;
            continue;
        }
        if (i == -1)
        {
            i = n - 1;
        }
        if (j == n)
        {
            j = 0;
        }
        if (arr[i][j] < numb && arr[i][j] != 0)
        {
            i += 1, j -= 2;
        }
        numb++;
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