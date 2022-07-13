#include<iostream>
using namespace std;

void fibenacci(int n){

   int n1 = 0;
  int  n2 = 1;
   int Nth; 
    for(int i=1; i<=n; i++){
        cout<<n1<<", ";
        Nth = n1+n2;
        n1= n2;
        n2= Nth;
    }
    cout<<endl;
    return ;
}

int main(){
    int n;
    cout<<"Enter the number N to get Fibenacci series : ";
    cin>>n;
    fibenacci(n);
    return 0;
}