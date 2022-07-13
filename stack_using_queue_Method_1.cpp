#include <bits/stdc++.h>
using namespace std;
// Push operator costly due to O(n) time complexity in push operation
class Stack{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
        n=0;
    }
    void push(int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp =q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        if(n==0){
          cout<<"Stack is empty"<<endl;
           return;
       }
        q1.pop();
        n--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return n;
    }
    
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    cout<<"size of stack -> "<<st.size()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<"size of stack -> "<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}