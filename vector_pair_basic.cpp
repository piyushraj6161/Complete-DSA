#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "size : " << v.size() << endl; // v.size() -> O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // **********************   Pair-Start   ********************* //
    // pair<int, string> p;     
    // p= make_pair(2,"abc");                  
    // // p = {2, "abcd"};
    // pair<int, string> &p1=p;
    // p1.first=3;
    // cout << p.first << " " << p.second << endl;
    // int a[]={1,2,3};
    // int b[]={2,3,4};
    // pair<int, int>p_arr[3];
    // p_arr[0]=make_pair(1,2);
    // p_arr[1]=make_pair(2,3);
    // p_arr[2]=make_pair(3,4);
    // swap(p_arr[0],p_arr[2]);
    // for(int i=0; i<3; i++){
    //     cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    //    }
// **********************   Vector-Start   ********************* //
vector<int> v;
int n;
cin >> n;
for (int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    // printVec(v);
    v.push_back(x); // O(1) time complexity
}
// v.pop_back();
//  printVec(v);
vector<int>v2=v; // O(n)
v2.push_back(6);
printVec(v);
printVec(v2);
return 0;
}