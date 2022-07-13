#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
  /*  for(int i=0; s[i] != '\0'; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] += 32;
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i] -= 32;
        }
    } */
    transform(s.begin(), s.end(), s.begin(), :: toupper);
    cout<<s<<endl;
    return 0;
}