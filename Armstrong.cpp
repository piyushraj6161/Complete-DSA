#include<iostream>
#include<math.h>
using namespace std;

int main(){                         // Armstrong number is equal to sum of cube of thier digits
    int n,lastdigit,sum=0;
   cout<<"Enter any Number : ";
    cin>>n;
int originaln = n;
    while(n>0){
        lastdigit = n%10;
        sum = sum + pow(lastdigit,3) ;
        n = n/10 ;
    }
    if(sum == originaln){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}