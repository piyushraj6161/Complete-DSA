#include <iostream>
using namespace std;

int Binary_To_Decimal(int n)
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
    int a, b;
    cout << "Enter the 1st Binary Number : ";
    cin >> a;

    cout << "Enter the 2nd Binary Number : ";
    cin >> b;
    int add = Binary_To_Decimal(a) + Binary_To_Decimal(b);
    int subtract = Binary_To_Decimal(a) - Binary_To_Decimal(b);
    int multiply = Binary_To_Decimal(a) * Binary_To_Decimal(b);
    int divide = Binary_To_Decimal(a) / Binary_To_Decimal(b);

    cout << "Addition of binary number a + b  = " << Decimal_To_Binary(add) << endl;
   cout << "Subtraction of binary number a - b  = " << Decimal_To_Binary(subtract) << endl;
    cout << "Multiplication of binary number a * b  = " << Decimal_To_Binary(multiply) << endl;
     cout << "Division of binary number a / b  = " << Decimal_To_Binary(divide) << endl;



    return 0;
}