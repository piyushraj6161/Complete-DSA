#include <iostream>
using namespace std;

int Hexadecimal_To_Decimal(string n)
{

    int ans = 0;
    int x = 1;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + x * (n[i] - 'A' + 10);
        }
        x = x * 16;
    }
    return ans;
}

int main()
{
    string n;
    cout << "Enter the Hexadecimal Number : ";
    cin >> n;              

    cout << "Decimal form : " << Hexadecimal_To_Decimal(n) << endl;

    return 0;
}