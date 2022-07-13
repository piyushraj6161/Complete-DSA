#include <iostream>
using namespace std;

int main()
{
    int intial, final, j, numb = 0;
    cout << "choose any two number to find prime number between them : ";
    cin >> intial >> final;
    for (int i = intial; i <= final; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << ", ";
            numb++;
        }
    }
    cout << "\n"
         << "Total number of prime number between choosen number is " << numb << endl;

    return 0;
}