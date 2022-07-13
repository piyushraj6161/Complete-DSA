#include<iostream>
using namespace std;

bool ispowerof2(int n){
    return(n && !(n&n-1));
}

int main(){
    int n;
    cout<<"Enter the number to check power of 2 : ";
    cin>>n;
    cout<<ispowerof2(n)<<endl;
    return 0;
}