#include <bits/stdc++.h>
using namespace std;

void reverse_sentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void insert_at_bottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int top_element = st.top();
    st.pop();
    insert_at_bottom(st, element);
    st.push(top_element);
}

void reverse_stack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int element = st.top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st, element);
}

int main()
{
    // string s = "Hey, how are you doing?";
    // reverse_sentence(s);
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i);
    }
    reverse_stack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}