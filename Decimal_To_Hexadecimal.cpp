#include <iostream>
using namespace std;

string Decimal_To_Hexadecimal(int n)
{

    string ans = "";

    while (n > 0)
    {

        int remainder = n % 16;
        if (remainder <= 9)
        {
            ans = ans + to_string(remainder);
            
        }
        else
        {
            char c = 'A' + remainder - 10;
            ans.push_back(c);
        }
        n = n/16;
    }
    int s = ans.size();
    char temp;
    for(int i=0; i<s/2; i++){
       // swap(ans[i],ans[s-i-1]);
       temp = ans[i];
       ans[i]=ans[s-i-1];
       ans[s-i-1]=temp;
    }   
    
    return ans;
}

int main()
{
    int n;
    cout << "Enter the Decimal Number : ";
    cin >> n;

    cout << "Hexadecimal form : " << Decimal_To_Hexadecimal(n) << endl;
    
    return 0;
}