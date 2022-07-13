#include <iostream>
using namespace std;

int main()
{
        int n,row,column;
        cout << "ENTER THE NUMBERS  : ";
        cin >> n;

        for (row = 1; row <= n; row++)
        {

            for ( column = 1; column <= n - row; column++)
            {
                cout << " ";
            }
        
        for(int k=1; k<2*row; k++){
            if (k == 1 || k == 2*row-1 )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }   
        }
        cout<<endl;
        }
         for (row = n; row >= 1; row--)
        {

            for ( column = 1; column <= n - row; column++)
            {
                cout << " ";
            }
        
        for(int k=1; k<2*row; k++){
            if (k == 1 || k == 2*row-1 )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }   
        }
        cout<<endl;
        }


        
        return 0;
    }