#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
 /*  complex()     // default constructor
    {
        real = 0;
        imag = 0;
    } */
    complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void display()
    {
        cout << real << " +i" << imag << endl;
    }
};

int main()
{
    complex c1(12, 7), c2(6, 7),c4(2,6), c3 = c1 + c2 + c4;
    c3.display();
    return 0;
}