#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int age;

    // Constructor
    Student(string studentName, int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main()
{
    Student s1("Bhaskar", 25);

    s1.display();

    return 0;
}