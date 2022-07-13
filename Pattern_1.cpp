#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "ENTER THE NUMBERS OF ROWS : ";
    cin >> row;
    cout << "ENTER THE NUMBERS OF COLUMNS : ";
    cin >> column;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
    return 0;
}