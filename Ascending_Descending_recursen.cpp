#include <iostream>
using namespace std;

void Descending(int n)
{
    if (n == 1)
    {
        cout << "1";
        return;
    }
    cout << n << ", ";
    Descending(n - 1);
}
void Ascending(int n)
{
    if (n == 1)
    {
        cout << "1, ";
        return;
    }
    Ascending(n - 1);
    cout << n << ", ";
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << " sorted in Ascending order : ";
    Ascending(n);
    cout << "\nsorted in Descending order : ";
    Descending(n);
    return 0;
}