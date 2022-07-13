#include <iostream>
using namespace std;

int Decimal_To_Binary(int n)
{
    int ans = 0;
    int i = 1;
    while (n > 0)
    {

        int remainder = n % 2;
        ans = ans + remainder * i;
        i = i * 10;
        n = n / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Decimal Number : ";
    cin >> n;
    cout << "Binary form : " << Decimal_To_Binary(n) << endl;
    return 0;
}