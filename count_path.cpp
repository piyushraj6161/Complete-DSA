#include <iostream>
using namespace std;

int count_path(int start, int end)
{
    if (start == end)
    {
        return 1;
    }
    if (start > end)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        
        count = count + count_path(start + i, end);
        cout<<count<<endl;
    }
    return count;
}

int main()
{
    cout <<"Ans = "<< count_path(0,3) << endl;
    return 0;
}