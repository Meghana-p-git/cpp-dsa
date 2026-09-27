#include <iostream>

// Base class
class Base {
public:
    virtual void display() {
        std::cout << "Base class display function" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class display function" << std::endl;
    }
};

int main() {
    // Creating a Derived object
    Derived Obj;

    // Creating a Base class pointer pointing to Derived object
    Base *baseptr = &Obj;

    // Invoking derived class member function through base class pointer
    baseptr->display();

    return 0;
}

