#include <iostream>
using namespace std;

int main()
{
    int n, row, column;
    cout << "ENTER THE NUMBERS  : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for(column=1; column<=row; column++){
            if((row+column)%2==0){
                cout<<"1  ";
            }
            else{
                cout<<"0  ";
            }
        }
        cout<<endl;
    }
    return 0;
}