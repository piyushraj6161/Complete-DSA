#include<iostream>
using namespace std;

void Wave_sort(int arr[],int n){
    for(int i=1; i<n; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i], arr[i-1]);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int n=7;
    int arr[]={1,3,4,7,5,6,2};
    Wave_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}