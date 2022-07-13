#include <iostream>
using namespace std;

int SetBit(int n, int indx)
{
    return ((n & (1 << indx)) != 0);
}

void unique(int arr[], int n)
{
    int xor_sum = 0;
    for (int i = 0; i < n; i++)
    {
        xor_sum = xor_sum ^ arr[i];
    }
    int temp_xor = xor_sum;
    int set_bit = 0;
    int indx = 0;
    while (set_bit != 1)
    {
        set_bit = xor_sum & 1;
        indx++;
        xor_sum = xor_sum >> 1;
    }
    int new_xor = 0;
    for (int i = 0; i < n; i++)
    {
        if (SetBit(arr[i], indx - 1))
        {
            new_xor = new_xor ^ arr[i];
        }
    }
    cout <<" unique number - " <<new_xor<<", " <<((new_xor) ^ (temp_xor))<<endl;
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1};
    unique(arr, 8);
    return 0;
}