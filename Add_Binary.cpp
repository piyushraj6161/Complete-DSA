#include <iostream>
using namespace std;

int reverse(int z)
{

    int reversenumber = 0;
    while (z > 0)
    {
        int lastdigit = z % 10;
        reversenumber = reversenumber * 10 + lastdigit;
        z = z / 10;
    }
    return reversenumber;
}

int Add_Binary(int a, int b)
{
    int ans = 0;
    int previous_carry = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + previous_carry;
            previous_carry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (previous_carry == 1)
            {
                ans = ans * 10 + 0;
                previous_carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                previous_carry = 0;
            }
        }
        else
        {
            ans = ans * 10 + previous_carry;
            previous_carry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while (a > 0)
    {
        if (previous_carry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                previous_carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                previous_carry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a /= 10;
    }
    while (b > 0)
    {
        if (previous_carry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 0;
                previous_carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                previous_carry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b /= 10;
    }
    if (previous_carry == 1)
    {
        ans = ans * 10 + 1;
    }
    ans = reverse(ans);

    return ans;
}

int main()
{
    int a, b;
    cout << "Enter the first number(a)  : ";
    cin >> a;

    cout << "Enter the second number(b) : ";
    cin >> b;

    if (a % 2 == 1 && b % 2 == 1)
    {
        cout << "Addition of binary number a + b  = " << Add_Binary(a, b)*10 << endl;
    }
    else
    {
        cout << "Addition of binary number a + b  = " << Add_Binary(a, b) << endl;
    }

    return 0;
}