#include <iostream>
using namespace std;

int main()
{
    int numb, i;
    cout << "choose any number to find prime number or not : ";
    cin >> numb;
    for (i = 2; i < numb; i++)
    {
        if (numb % i == 0)
        {
            cout << "choosen number " << numb << " is not a prime number\n";
            break;
        }
    }
    if (i == numb)
    {
        cout << "choosen number " << numb << " is a prime number\n";
    }

    return 0;
}