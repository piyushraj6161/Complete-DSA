#include <bits/stdc++.h>
using namespace std;

string postfix_to_infix(string s)
{
    stack<string> st;
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            string op(1, s[i]);
            st.push(op);
        }
        else
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push("(" + op2 + s[i] + op1 + ")");
        }
    }
     return st.top();
}    
    int main()
    {
        // cout<<infix_to_postfix("(a-b/c)*(a/k-l)")<<endl;
        cout << postfix_to_infix("abc/-ak/l-*") << endl;
        return 0;
    }