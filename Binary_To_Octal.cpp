#include <iostream>
using namespace std;

int Binary_To_Octal(int n)
{
   int ans = 0;
    int x = 1;
    while (n > 0)
    {

        int lastdigit = n % 10;
        ans = ans + lastdigit * x;
        x = x * 2;
        n = n / 10;
        
    }
     return ans;
}
int Decimal_To_Octal(int z)
{
    int octal = 0;
    int i = 1;
    while (z > 0)
    {

        int remainder = z % 8;
        octal = octal + remainder * i;
        i = i * 10;
        z = z / 8;
    }
    return octal;
}

    int main()
    {
        int n;
        cout << "Enter the Binary Number : ";
        cin >> n;
        cout << "Decimal form : " << Binary_To_Octal(n)<<endl;
        cout << "Octal form : " << Decimal_To_Octal(Binary_To_Octal(n))<<endl;
        
        return 0;
    }