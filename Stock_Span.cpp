#include <bits/stdc++.h>
using namespace std;

vector<int> Stock_Span(vector<int> prices)
{
    vector<int> ans;
    stack<pair<int, int> > st;
    for (int i = 0; i < prices.size(); i++)
    {
        int days = 1;
        while (!st.empty() && st.top().first <= prices[i])
        {
            days += st.top().second;
            st.pop();
        }
        st.push(make_pair(prices[i], days));
        ans.push_back(days);
    }
    return ans;
}

int main()
{
    vector<int> a; // ={100,80,60,70,60,75,85}
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> result = Stock_Span(a);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}