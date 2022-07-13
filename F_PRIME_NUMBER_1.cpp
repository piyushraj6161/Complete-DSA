#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int num){
    for(int j=2; j<=sqrt(num); j++){
        if(num%j==0){
            return false;
        }
    }
    return true;
}

int main(){
    int intial, final;
    cout << "choose any two number to find prime number between them : ";
    cin >> intial >> final;

    for(int i= intial; i<=final; i++){
        if(isprime(i)){
            cout<<i<<", ";
        }
    }
    cout<<endl;
    return 0;
}