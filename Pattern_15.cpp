#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBERS  : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j == 1 || j == i || j == (2 * n - i + 1) || j == 2*n )
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j == 1 || j == i || j == (2 * n - i + 1) || j == 2*n )
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}