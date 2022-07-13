#include <iostream>
using namespace std;

int octal_To_Decimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {

        int lastdigit = n % 10;
        ans = ans + lastdigit * x;
        x = x * 8;
        n = n / 10;
        
    }
     return ans;
}
int Decimal_To_Binary(int z)
{
    int binary = 0;
    int i = 1;
    while (z > 0)
    {

        int remainder = z % 2;
        binary = binary + remainder * i;
        i = i * 10;
        z = z / 2;
    }
    return binary;
}

    int main()
    {
        int n;
        cout << "Enter the Octal Number : ";
        cin >> n;
        cout << "Decimal form : " << octal_To_Decimal(n)<<endl;
        cout << "Binary form : " << Decimal_To_Binary(octal_To_Decimal(n))<<endl;
        return 0;
    }