#include <iostream>
#include <string>

using namespace std;

// Structure Definition
struct Student
{
    string name;
    int age;
    float marks;
};

int main()
{
    Student s1;

    s1.name = "Bhaskar";
    s1.age = 25;
    s1.marks = 92.5;

    cout << "Student Information" << endl;
    cout << "Name  : " << s1.name << endl;
    cout << "Age   : " << s1.age << endl;
    cout << "Marks : " << s1.marks << endl;

    return 0;
}