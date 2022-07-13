#include <bits/stdc++.h>
// #include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);
    // for (auto i : dq)
    // {
    //     cout << i << " " << endl;
    //     
    // }
     for (int i=0; i<dq.size();i++)
    {
        cout << dq.front() << " " << endl;
        cout << dq.back() << " " << endl;
        dq.pop_front();
        dq.pop_back();
        
    }
    return 0;
}