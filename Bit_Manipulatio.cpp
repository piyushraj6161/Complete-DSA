#include <iostream>
using namespace std;

int Binary_To_Decimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans = ans + lastdigit * x;
        x = x * 2;
        n = n / 10;
      
    }
     return ans;
}

int Decimal_To_Binary(int n)
{
    int ans = 0;
    int i = 1;
    while (n > 0)
    {
        int remainder = n % 2;
        ans = ans + remainder * i;
        i = i * 10;
        n = n / 2;
    }
    return ans;
}

int getbit(int n, int indx)
{
    return ((n & (1 << indx)) != 0);
}

int setbit(int n, int indx)
{
    return (n | (1 << indx));
}

int clearbit(int n, int indx)
{
    return (n & ~(1 << indx));
}

int updatebit(int n, int indx, int value)
{
    return ((n & ~(1 << indx)) | (value << indx) );
}

 bool ispowerof2(int n){
    return(n && !(n&n-1));
} 

void subsets(int arr[], int n){
    for(int i=0; i< (1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}


int main()
{
  /*  int n, indx, value;
    cout << "Enter the binary number : ";
    cin >> n;
    cout << "Enter the index : ";
    cin >> indx;   */
    
   /* cout << "At index " << indx << " number is ";
    cout << getbit(Binary_To_Decimal(n), indx) << endl;  */
   // cout << Decimal_To_Binary(setbit(Binary_To_Decimal(n), indx)) << endl;
   //   cout << Decimal_To_Binary(clearbit(Binary_To_Decimal(n), indx)) << endl;
   /*   cout << "Enter the value which update : ";
      cin >>value;
      cout << Decimal_To_Binary(updatebit(Binary_To_Decimal(n),indx,value)) << endl;  */
      
   /* int n;
    cout<<"Enter the number to check power of 2 : ";
    cin>>n;
    cout<<ispowerof2(n)<<endl;  */

    int arr[]= {1,2,3};
    subsets(arr,3);

    return 0;
}