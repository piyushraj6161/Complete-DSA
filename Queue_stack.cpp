#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    void pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is Empty" << endl;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }
    int peek()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is Empty : ";
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is Empty : ";
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.push(5);
    q.pop();
    q.pop();
    q.pop();
    cout << q.peek() << endl;

    return 0;
}