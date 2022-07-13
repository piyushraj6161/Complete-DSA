#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "ENTER THE NUMBERS OF ROWS : ";
    cin >> m;
    cout << "ENTER THE NUMBERS OF COLUMNS : ";
    cin >> n;
    int matrix[m][n];
    cout<<"Enter the matrix \n";
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Transpose of matrix\n";
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}