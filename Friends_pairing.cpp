#include <iostream>
using namespace std;

int Friends_Pairing(int n)
{
    if (n == 0 || n == 1 || n==2)
    {
        return n;
    }
    return ( Friends_Pairing(n - 1) + Friends_Pairing(n - 2) * (n - 1));
}

int main()
{
    cout << "Ans = " << Friends_Pairing(3) << endl;
    return 0;
}