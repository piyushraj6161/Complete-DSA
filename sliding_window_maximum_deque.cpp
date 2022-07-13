#include <bits/stdc++.h>
using namespace std;
// 1st method in time complexity nlog(n);
// int main()
// {
//     int n, k;
//     cin >> n>> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     multiset<int, greater<int> > s;
//     vector<int> ans;
//     for (int i = 0; i < k; i++)
//     {
//         s.insert(a[i]);
//     }
//     ans.push_back(*s.begin());
//     for (int i = k; i < n; i++)
//     {
//         s.erase(s.lower_bound(a[i - k]));
//         s.insert(a[i]);
//         ans.push_back(*s.begin());
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << endl;
//     }
//     return 0;
// }


// 2nd method in time complexity O(n);
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    deque<int> q;
    vector<int> ans;
    for(int i=0; i<k; i++){
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for(int i=k; i<n; i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}