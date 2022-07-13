#include<iostream>
using namespace std;

int Tiling_way(int n){
    if(n==0){
        return 0;
    }
     if(n==1){
        return 1;
    }
    return (Tiling_way(n-1) + Tiling_way(n-2));
}

int main(){
   cout<<"Ans = "<<Tiling_way(4)<<endl;
    return 0;
}