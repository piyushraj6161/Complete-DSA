#include<iostream>
using namespace std;


int linear_search(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}

int main(){
    int n;
    cout<<"How many number : ";
    cin>>n;
cout<<"Enter the numbers : ";
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Which number to find Index : ";
    cin>>key;

    cout<<"Index(start from '0') : "<<linear_search(arr,n,key)<<endl;
    return 0;
}