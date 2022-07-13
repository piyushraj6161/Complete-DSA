#include <iostream>
using namespace std;

int Decimal_To_Octal(int n)
{
    int ans = 0;
    int i = 1;
    while (n > 0)
    {

        int remainder = n % 8;
        ans = ans + remainder * i;
        i = i * 10;
        n = n / 8;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Decimal Number : ";
    cin >> n;
    cout << "Octal form : " << Decimal_To_Octal(n) << endl;
    return 0;
}