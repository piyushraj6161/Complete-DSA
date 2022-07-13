#include<iostream>
using namespace std;

int main(){
    int n,lastdigit,reversenumber=0;
   cout<<"Enter any Number : ";
    cin>>n;

        while(n>0){
            lastdigit = n%10;
            reversenumber = reversenumber*10 + lastdigit ;
            n = n/10 ;
        }
    cout<<"Reverse of Number : "<<reversenumber<<endl;
    return 0;
}