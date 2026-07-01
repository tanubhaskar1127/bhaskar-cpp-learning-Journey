# Day 14 - Classes and Objects

## What I Studied

- Classes
- Objects
- Data Members
- Member Functions

---

## What I Learned

A class is a blueprint used to create objects.

An object is an instance of a class.

Classes combine data and functions into a single unit.

---

## Syntax

```cpp
class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << name;
    }
};
```

---

## Creating an Object

```cpp
Student s1;
```

---

## Accessing Members

```cpp
s1.name = "Bhaskar";
s1.age = 25;

s1.display();
```

---

## Components of a Class

- Data Members
- Member Functions
- Access Specifiers

---

## Access Specifiers

### public

Members can be accessed from anywhere.

```cpp
public:
```

Later you will also learn:

- private
- protected

---

## Advantages of Classes

- Organizes code
- Improves readability
- Encourages code reuse
- Foundation of Object-Oriented Programming
- Easier to maintain large projects

---

## Real-Life Examples

- Student
- Employee
- Bank Account
- Car
- Mobile Phone
- Library System

---

## Key Takeaway

A class defines the structure and behavior of an object. Objects are created from classes and contain their own data while sharing the same functionality.
