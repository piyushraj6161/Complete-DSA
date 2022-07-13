#include <iostream>
using namespace std;

int main()
{
    int rupees, chocolates, wrappers = 0, rem_wrappers = 0; 

    cout << "Enter the amount to buy chocolate : ";
    cin >> rupees;

    while (rupees > 0)
    {
         wrappers = rupees + wrappers;
       
        rem_wrappers = rem_wrappers + rupees % 3;
        if (rem_wrappers >= 3)
        {
            wrappers = wrappers + rem_wrappers / 3;
            rem_wrappers = rem_wrappers/3 + rem_wrappers%3;
        }
        rupees = rupees / 3;
    }

    cout << "Maximum chocolates under your price : " << wrappers << endl;

    return 0;
}