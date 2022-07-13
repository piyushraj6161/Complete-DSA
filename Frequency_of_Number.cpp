#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val;
    int test[n], c = 0;
    int flag;

    cout << "How many number : ";
    cin >> n;
    cout << "Enter the numbers : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        int count = 0;
        
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                val = arr[i];

                count++;
            }
        }
        
    flag = 1;
        for (int k = 0; k < c; k++)
        {
            if (test[k] == val)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "value " << val << " repeated " << count << " times" << endl;
            test[c] = val;
            c++;
        }
    }

    cout << endl;
    return 0;
}