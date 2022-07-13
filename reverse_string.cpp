#include <iostream>
#include <string>
using namespace std;

void reverse_string(string s)
{
    if (s.length() == 0)
    {
        return;
    }
  //  string RestString = s.substr(1);
    reverse_string(s.substr(1));
    cout << s[0];
}

int main()
{
    string s = "hsuyip";
    reverse_string(s);
    return 0;
}