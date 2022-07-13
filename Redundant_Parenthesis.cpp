#include <bits/stdc++.h>
using namespace std;

bool Redundant_Parenthesis(string s)
{
    int i = 0;
    stack<char> st;
    while (i < s.size())
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                return true;
            }
            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            if (st.top() == '(')
            {
                 st.pop();
            }
        }
        i++;
    }
    return false;
}

int main()
{
    string s1 = "((a+b))";   // ((a+b)) --> 1
    string s2 = "(a+(a+b))"; // (a+(a+b))  --> 0
    cout << "string s1 -> " << Redundant_Parenthesis(s1) << endl;
    cout << "string s2 -> " << Redundant_Parenthesis(s2) << endl;
    return 0;
}