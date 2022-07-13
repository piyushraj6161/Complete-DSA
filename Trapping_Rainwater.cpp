#include <bits/stdc++.h>
using namespace std;

int Trapping_Rainwater(vector<int> a)
{
    int n = a.size(), ans = 0;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int current = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int diff = i - st.top() - 1;
            ans += ( min(a[st.top()], a[i]) - a[current]) * diff;
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> a; // = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout << Trapping_Rainwater(a) << endl;
    return 0;
}