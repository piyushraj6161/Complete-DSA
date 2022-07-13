#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> piyush;
    piyush.push_back(1);
    piyush.push_back(2);
    piyush.push_back(3);
    cout<<"1st method : ";
    for(int i=0; i<piyush.size(); i++){       // 1st method
        cout<<piyush[i];
    } // 1 2 3
     cout<<"\n2nd method : ";                    // 2nd method
    vector<int>:: iterator Mc;
    for(Mc = piyush.begin(); Mc!=piyush.end();Mc++){
        cout<<*Mc;
    } // 1 2 3
cout<<"\n3rd method : ";                            // 3rd method
for(auto element: piyush){
    cout<<element;
} // 1 2 3 
cout<<endl;
piyush.pop_back(); // 1 2
vector<int> v2(3,7);
sort(piyush.begin(), piyush.end());             // vector sort
for(int i=0; i<piyush.size(); i++){       
        cout<<piyush[i];
    }
swap(piyush, v2);
cout<<"vector piyush swap : ";
for(int i=0; i<piyush.size(); i++){       // vector piyush swap to v2
        cout<<piyush[i];
    }
    cout<<endl;
    cout<<"vector v2 swap : ";
    for(int i=0; i<v2.size(); i++){        // vector v2 swap to piyush
        cout<<v2[i];
    }
    cout<<endl;

    return 0;
}