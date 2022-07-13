#include <iostream>
using namespace std;

int SetBit(int n, int indx)
{
    return (n | (1 << indx));
}

int GetBit(int n, int indx)
{
    return ((n & (1 << indx)) != 0);
}

int unique(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (GetBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = SetBit(result, i);
        }
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 3, 2, 1, 3, 1};
    cout <<" unique number - " << unique(arr, 10)<< endl;
    return 0;
}