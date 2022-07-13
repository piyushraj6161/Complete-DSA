#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int> > &v)
{
    cout << "size : " << v.size() << endl; // v.size()
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    // cout << endl;
}
void print_ArrVec(vector<int> &v)
{
    cout << "size : " << v.size() << endl; // v.size()
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;
}
int main()
{
    // ******* pair in vector *******

    // vector<pair<int, int> > v;
    // v={{1,2},{2,3},{3,4}};
    // v.push_back(make_pair(1, 2));
    // v.push_back(make_pair(2, 3 ));
    // v.push_back(make_pair(3, 4));
    //     int n;
    //     cin>>n;
    //     for(int i=0; i<n; i++){
    //         int x,y;
    //         cin>>x>>y;
    //         v.push_back(make_pair(x,y));
    //     }
    //    printVec(v);

    // ******* array of vector *******
    int N;
    cin >> N;
    // vector<int> v[N];      //2D array - here no of row is fixed but no of column is variable size
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }

        // ******* vector of vector *******

    //  vector<vector<int > > v;      //2D array - here no of row & column is variable size
    //  for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int>temp;
    //    v.push_back(vector<int> ()); // 2nd method to impliment
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //   v[i].push_back(x);             // 2nd method to impliment
    //     }
    //     v.push_back(temp);
    // }
    // vector<int> temp1;
    // temp1.push_back(10);
    // temp1.push_back(20);
    // temp1.push_back(30);
    // v.push_back(temp1);

    for (int i = 0; i < v.size(); i++)
    {
        print_ArrVec(v[i]);
    }

    return 0;
}