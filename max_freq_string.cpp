#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "fghjjyruwfknvbhsgfusggvfjhgljmsbvfsn";
    int freq[26];
    for (int i = 0; i < s.size(); i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans ;
    int max_freq = 0;
    for(int i=0; i<s.size(); i++){
        if(freq[i]>max_freq){
            max_freq = freq[i];
            ans = i + 'a';
        }
    }
    cout<<"max freq alphabet = "<<ans<<", "<<max_freq<<" times"<<endl;
    return 0;
}