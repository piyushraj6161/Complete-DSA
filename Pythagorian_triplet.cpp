#include <iostream>
using namespace std;

int pythagorous(int x, int y, int z)
{

    int a = max(x, max(y, z));
    int b,c;
        if(a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int x, y, z;
    cout << "Enter any three number to check pythagorian triplet : ";
    cin >> x >> y >> z;
    if (pythagorous(x, y, z))
    {
        cout << "Pythagorian Triplet\n";
    }
    else
    {
        cout << "Not Pythagorian Triplet\n";
    }

    return 0;
}