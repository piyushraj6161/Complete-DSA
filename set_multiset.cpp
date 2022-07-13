#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set/multiset implementation using BST
    // set<int> s; // duplicates are not allowed 
    multiset<int> s;  // duplicates are  allowed
    // unordered_set<int> s;
    // set<int, greater<int> > s;
    s.insert(9);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(13);
    s.insert(3);
    s.insert(1);
    s.insert(15);
    // set print in simple order 
      for(auto i : s){
          cout<<i<<" ";
      }
      cout << endl;
    // echo 'alias g++="g++ -std=c++11"' >> ~/.bash_profile source ~/.bash_profile  // this is for auto keyboard support
    // source ~/.bash_profile    
    // for (auto i = s.begin(); i!= s.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    // cout << endl;
    // // set print in reverse order 
    // for (auto i = s.rbegin(); i!= s.rend(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    // cout<<*s.lower_bound(10)<<"\n";
    // cout<<*s.lower_bound(3)<<"\n";
    // cout<<*s.upper_bound(2)<<"\n";
    // cout<<*s.upper_bound(10)<<"\n";
    // cout<<*s.lower_bound(5)<<"\n";
    s.erase(2);
    // s.erase(s.begin());
    // s.erase(s.find(2));
    // s.erase(s.lower_bound(2));
    // for (auto i = s.begin(); i!= s.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    cout<<s.size();
    cout << endl;
    // cout << endl;
    return 0;
} 