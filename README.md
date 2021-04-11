# Object-oriented programming (OOP) in pure C

This example presents a simple yet effective way to use OOP in C, without any libraries or language extensions. Classes are implemented using C structs, and each class is separated in a header file (describing classes and method prototypes) and a code file (method and constructor implementation). A similar approach to OOP in C could also be used in a single .c file.

The following concepts of OOP are defined:

## Encapsulation

Classes are implemented in C structs and are separated by individual header and implementation files. Public method prototypes are exposed on the header, while private method prototypes are declared inside the implementation files. Private methods are declared as static, so they are only visible inside the class scope.

## Inheritance

Inheritance is implemented using a superclass / base class (Animal) and derived classes (Dog and Cat). Both Dog and Cat classes inherit the properties of the Animal class (attributes and virtual methods).

## Polymorphism

Polymorphism is implemented by the use of virtual tables and pointers, initialized on class constructors. Derived class constructors call the base class constructor.
