#include <iostream>
using namespace std;

int count_path_maze(int n, int start, int end)
{
    cout << "i = " << start << " j = " << end << endl;
    if (start == n - 1 && end == n - 1)
    {
        return 1;
    }
    if (start >= n || end >= n)
    {
        return 0;
    }

    return (count_path_maze(n, start + 1, end) + count_path_maze(n, start, end + 1));
}

int main()
{
    cout << "Ans = " << count_path_maze(3, 0, 0) << endl;
    return 0;
}