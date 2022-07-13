#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBERS  : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    { 
        
        for (int k = 1; k <= (n - i); k++)
        {
            cout << "  ";
        }
        int k=i;
        for (int j=n-i+1; j<=n ; j++)
        {
           cout<<k--<<" ";
        }
    k=2;
    for(int j=n+1; j<=n+i-1;j++){
        cout<<k++<<" ";
    }

        cout << endl;
    }
    return 0;
}