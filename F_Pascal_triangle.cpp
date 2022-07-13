#include <iostream>
using namespace std;

int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "Enter the number of row : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
          
            cout << factorial(i) / (factorial(j) * factorial(i-j)) <<" ";
        }
        cout<<endl;
    }

    return 0;
}