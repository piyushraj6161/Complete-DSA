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
    int row_start = 0, row_end = m - 1;
    int column_start = 0, column_end = n - 1;
    cout<<"spiral matrix : "<<endl;
    while (row_start <= row_end && column_start <= column_end)
    {
        for (int col = column_start; col <= column_end; col++)
        {
            cout << matrix[row_start][col] << " ";
        }
        row_start++;
        cout<<endl;
        for (int row = row_start; row <= row_end; row++)
        {
            cout << matrix[row][column_end] << " ";
        }
        column_end--;
        cout<<endl;
        for (int col = column_end; col >= column_start; col--)
        {
            cout << matrix[row_end][col] << " ";
        }
        row_end--;
        cout<<endl;
        for (int row = row_end; row >= row_start; row--)
        {
            cout << matrix[row][column_start] << " ";
        }
        column_start++;
        cout<<endl;
    }
    return 0;
}