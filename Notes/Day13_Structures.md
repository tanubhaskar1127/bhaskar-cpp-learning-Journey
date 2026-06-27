# Day 13 - Structures

## What I Studied

- Structures (struct)
- Creating Custom Data Types
- Accessing Structure Members

## What I Learned

A structure is a user-defined data type that groups different types of data under a single name.

Structures help organize related information together.

## Syntax

```cpp
struct Student
{
    string name;
    int age;
    float marks;
};
```

## Creating Objects

```cpp
Student s1;
```

## Assigning Values

```cpp
s1.name = "Bhaskar";
s1.age = 25;
s1.marks = 92.5;
```

## Accessing Members

```cpp
cout << s1.name;
cout << s1.age;
cout << s1.marks;
```

The dot operator (.) is used to access structure members.

## Advantages

- Better organization of data
- Easier management of related information
- Foundation for complex data structures

## Real Life Usage

- Student Records
- Employee Records
- Book Management Systems
- Banking Applications
- Inventory Systems

## Key Takeaway

Structures allow us to combine multiple pieces of related information into a single custom data type.
