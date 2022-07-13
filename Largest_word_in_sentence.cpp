#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter the sentence : ";
    cin.getline(arr, 100);
    cin.ignore();
    int current_length = 0, max_length = 0;
    int count = 0, end_point = 0;
    int i = 0;
    while (i < 100)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (current_length >= max_length)
            {
                max_length = current_length;
                end_point = i;

            }
            
            current_length = 0;
            // start = i+1;
        }
        else
        {
            current_length++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
     cout << max_length<<", " ;
    int x=0;
    while (x < 100)
    {
        if (arr[x] == ' ' || arr[x] == '\0')
        {
            if (count == max_length)
            {
                for (int z = x - max_length; z < x; z++)
                {
                    cout << arr[z];
                }
                cout<<", ";
            }

            count = 0;
            // start = i+1;
        }
        else
        {
            count++;
        }
        if (arr[x] == '\0')
        {
            break;
        }
        x++;
    }
    
    cout << endl;
    return 0;
}