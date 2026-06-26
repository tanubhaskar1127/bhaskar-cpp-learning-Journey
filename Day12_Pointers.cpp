#include <iostream>

using namespace std;

int main()
{
    int number = 10;

    int *ptr = &number;

    cout << "Value of number: " << number << endl;

    cout << "Address of number: " << &number << endl;

    cout << "Pointer stores address: " << ptr << endl;

    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}