#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBERS  : ";
    cin >> n;
    int coef = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            cout<<" "<<coef<<"  ";
        }
        cout << endl;
    }
    return 0;
}