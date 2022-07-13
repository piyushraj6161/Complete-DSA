#include <bits/stdc++.h>
using namespace std;

int Balanced_Parenthesis(string s)
{
    int i = 0;
    stack<char> st;
    while (i < s.size() / 2)
    {
        if (s[i] == '(')
        {
            st.push(')');
        }
        else if (s[i] == '{')
        {
            st.push('}');
        }
        else
        {
            st.push(']');
        }
        i++;
    }
    while (i < s.size())
    {
        if (st.top() == s[i])
        {
            st.pop();
            i++;
            continue;
        }
        else
        {
            return -1;
        }
    }
    return 1;
}

int main()
{
    string s1 = "[{()}]";
    string s2 = "{[{([])}]}";
    cout << "string s1 -> " << Balanced_Parenthesis(s1) << endl;
    cout << "string s2 -> " << Balanced_Parenthesis(s2) << endl;
    return 0;
}