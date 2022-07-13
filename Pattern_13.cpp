#include <iostream>
using namespace std;

int main()
{
        
        printf("Pattern draw according to 3-Rows & 9-Columns\n");

        for (int row = 1; row <= 3; row++)
        {

            for (int column = 1; column <= 9; column++)
            {
                if(((row+column)%4 == 0) || (row == 2 && column%4 == 0)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        
        
        cout<<endl;
        }

        
        return 0;
    }