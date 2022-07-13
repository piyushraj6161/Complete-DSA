#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;
    void set_name(string s)
    {
        name = s;
    }
    void get_name()
    {
        cout << name << endl;
    }
    student()
    { // Default constructor
        cout << "Default constructor " << endl;
    }
    student(string s, int a, bool g)
    {
        cout << "Parameterised constructor " << endl; //   parameterised constructor
        name = s;
        age = a;
        gender = g;
    }
    student(student &a)
    { //    Copy constructor
        cout << "Copy constructor " << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
    ~student()
    {
        cout << "Destructor called" << endl;
    }
    void print_info()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
};

int main()
{
    // student a,b, s[3];
    /* a.name = 'Piyush';
    a.age = 20;
    a.gender = 1;  */
    /* for (int i = 0; i < 3; i++)
    {
        string s1;
        cout << "Enter Name of " << i + 1 << " student = ";
        cin >> s[i].name;
        cout << "Enter Private_Name of " << i + 1 << " student = ";
        cin >> s1;
        s[i].set_name(s1);
        cout << "Enter age of " << i + 1 << " student = ";
        cin >> s[i].age;
        cout << "Enter gender of " << i + 1 << " student = ";
        cin >> s[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        s[i].print_info(i);
    }       */

    /* string s1;                           set & get function use
       cout << "Private_Name of student = ";
        cin >> s1;
        b.set_name(s1);
        b.get_name();  */

    student a("Urvi", 21, 1);
    // a.print_info();
    student b;
    student c = a;
    if (b == a)
    {
        cout << "Data are same" << endl;
    }
    else
    {
        cout << "Data are not same" << endl;
    }

    return 0;
}