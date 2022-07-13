#include<iostream>
using namespace std;

int factorial(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial= factorial*i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"Enter the value of n and r respectively : ";
    cin>>n>>r;

    int Ans = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<Ans<<endl;
    
    return 0;
}