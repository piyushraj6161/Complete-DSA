#include<iostream>
using namespace std;

class Apnacolege{
    public:
    void fun(){
        cout<<"I am a funtion with no arguments"<<endl;
    }
     void fun(int x){
        cout<<"I am a funtion with arguments"<<endl;
    }
     void fun(double x){
        cout<<"I am a funtion with double arguments"<<endl;
    }
};

int main(){
    Apnacolege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.7);
    return 0;
}