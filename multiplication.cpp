#include <iostream>
using namespace std;

int main()
{
    int row1, column1, column2;
    cout << "Enter the row & column of 1st matrix : ";
    cin >> row1 >> column1;
    int matrix1[row1][column1];
    cout << "Enter the 1st matrix : \n";
    for (int i = 0; i <= row1 - 1; i++)
    {
        for (int j = 0; j <= column1 - 1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the row & column of 2nd matrix : ";
    cin >> column1 >> column2;
    int matrix2[column1][column2];
    cout << "Enter the 2nd matrix : \n";
    for (int i = 0; i <= column1 - 1; i++) // row2 = column1
    {
        for (int j = 0; j <= column2 - 1; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    int ans[row1][column2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < column1; k++)
            {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of matix \n";
    for (int i = 0; i <= row1 - 1; i++)
    {
        for (int j = 0; j <= column2 - 1; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}