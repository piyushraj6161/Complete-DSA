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
    cout << "Enter the matrix \n";
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int target;
    cout << "Enter the number which find : ";
    cin >> target;
    bool found = false;
    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (matrix[r][c] == target)
        {
            found = true;
        }
        if (matrix[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found == true)
    {
        cout << "Element Matched\n";
    }
    else
    {
        cout << "Element Not Matched\n";
    }
    return 0;
}