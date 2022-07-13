#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
  
/* Function to rotate arr[] of size n by d */
void LeftRotate(int arr[], int d, int n)
{
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
   
}

void RightRotate(int arr[], int d, int n)
{
    if (d == 0)
        return;
    // in case the rotating factor is
    // greater than array length
    d = d % n;
    //Clockwise rotation
    reverse(arr,arr+(n-d));
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+n);
}

int main(){

int n=8, d=4;
int arr[]={1,2,3,4,5,6,7,8};
cout<<"Left rotation : ";
    LeftRotate(arr,d,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Right rotation : "<<endl;
    RightRotate(arr,d,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}