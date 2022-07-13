#include <iostream>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    { 
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack is Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()  
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
    
};

int main()
{   
    // stack top=-1;
    stack st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(6);
    // st.push(5);
    // st.push(4);
  //  display();
  for(int i=0; i<200; i++){
      st.push(i);
  }
while(!st.empty()){
cout<<st.Top()<<" ";
st.pop();
}
cout<<endl;
    // cout<<st.Top()<<endl;
    // st.pop();
    // cout<<st.Top()<<endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // cout<<st.empty()<<endl;
    return 0;
}