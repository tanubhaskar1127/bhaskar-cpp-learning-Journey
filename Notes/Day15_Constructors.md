# Day 15 - Constructors

## What I Studied

- Constructors
- Parameterized Constructors
- Object Initialization

---

## What I Learned

A constructor is a special member function that is automatically called when an object is created.

Its main purpose is to initialize the object's data members.

---

## Characteristics of a Constructor

- Name is the same as the class name.
- Has no return type.
- Executes automatically when an object is created.
- Can accept parameters.

---

## Syntax

```cpp
class Student
{
public:
    Student()
    {
        // Constructor
    }
};
```

---

## Parameterized Constructor

```cpp
Student(string name, int age)
{
    this->name = name;
    this->age = age;
}
```

---

## Creating an Object

```cpp
Student s1("Bhaskar", 25);
```

The constructor runs automatically.

---

## Advantages

- Initializes objects automatically.
- Reduces repetitive code.
- Makes programs cleaner and easier to maintain.

---

## Real-Life Usage

- Creating user accounts
- Bank account initialization
- Student management systems
- Shopping cart items
- Employee records

---

## Key Takeaway

Constructors ensure that every object starts with valid initial values as soon as it is created.
