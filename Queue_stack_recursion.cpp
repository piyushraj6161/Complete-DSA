#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop(int i)
    {
        if (s1.empty())
        {
            cout<<i<<" -> step -> empty(upper start) -> "<<endl;
            cout << "Queue is Empty" << endl;
            return -1;
        }
        int x= s1.top();
        cout<<i<<" -> step(s1.top) -> "<<x<<endl;
        s1.pop();
        if(s1.empty()){
            cout<<i<<" -> step -> empty(recursive end) -> "<<endl;
            return x;
        }
        int j=i+1;
      int item = pop(j);
      cout<<i<<" item -> "<<item<< " -> step -> between(poping end) -> "<<endl;
        s1.push(x);
        cout<<i<<" -> step -> (last) s1.push(x) -> "<<x<<endl;
        return item;
cout<<"***** The End *****"<<endl;
    }
    // int peek()
    // {
    //     if (s1.empty())
    //     {
    //         cout << "Queue is Empty : ";
    //         return -1;
    //     }
    //     if (s2.empty())
    //     {
    //         while (!s1.empty())
    //         {
    //             s2.push(s1.top());
    //             s1.pop();
    //         }
    //     }
    //     return s2.top();
    // }
    bool empty()
    {
        if (s1.empty())
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
    q.push(4);
    q.push(5);
    q.push(6);
    // q.push(4);
    cout << q.pop(1) << endl;
    cout << q.pop(1) << endl;
    cout << q.pop(1) << endl;
    // cout << q.pop(1) << endl;
    // cout << q.pop() << endl;
    // q.pop();
    // cout << q.peek() << endl;
    // q.push(5);
    // q.pop();
    // q.pop();
    // q.pop();
    // cout << q.peek() << endl;

    return 0;
}