#include <iostream>
using namespace std;

int main()
{
    int row, column, i, j;
    cout << "ENTER THE NUMBERS OF ROWS : ";
    cin >> row;
    cout << "ENTER THE NUMBERS OF COLUMNS : ";
    cin >> column;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            if (i == 1 || i == row || j == 1 || j == column)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
    

    cout << endl;
}
return 0;
}