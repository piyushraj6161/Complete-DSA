#include<iostream>
using namespace std;

bool issafe(int** arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool Rat_in_Maze(int** arr, int x, int y, int n, int** sol_arr)
{

    if (x == n - 1 && y == n - 1)
    {
        sol_arr[x][y] = 1;
        return true;
    }

    if (issafe(arr, x, y, n))
    {
        sol_arr[x][y] = 1;
        if (Rat_in_Maze(arr, x + 1, y, n, sol_arr))
        {
            return true;
        }
        if (Rat_in_Maze(arr, x, y + 1, n, sol_arr))
        {
            return true;
        }
        sol_arr[x][y] = 0;
        return false;
    }
    return false;
}

int main(){
     int n;
    cin >> n;

    int** arr =new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] =new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int** sol_array =new int* [n];
    for (int i = 0; i < n; i++)
    {
        sol_array[i] =new int[n];
        for (int j = 0; j < n; j++)
        {
            sol_array[i][j] = 0;
        }
    }
    cout<<"ANS :- "<<endl;
    if (Rat_in_Maze(arr, 0, 0, n, sol_array))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << sol_array[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}