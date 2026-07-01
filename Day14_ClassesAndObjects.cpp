#include <iostream>
#include <string>

using namespace std;

// Class Definition
class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main()
{
    // Object Creation
    Student s1;

    cout << "Enter Student Name: ";
    getline(cin, s1.name);

    cout << "Enter Student Age: ";
    cin >> s1.age;

    // Calling Member Function
    s1.display();

    return 0;
}