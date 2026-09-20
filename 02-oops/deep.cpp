#include <iostream>
#include <cstring> // for memcpy

class MyClass {
private:
    int* data;
    int size;
    
public:
    // Constructor
    MyClass(int sz) : size(sz) {
        data = new int[size];
    }
    
    // Destructor
    ~MyClass() {
        delete[] data;
    }
    
    // Copy Constructor (Deep Copy)
    MyClass(const MyClass& other) : size(other.size) {
        data = new int[size];
        memcpy(data, other.data, size * sizeof(int));
    }
    
    // Assignment Operator (Deep Copy)
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            memcpy(data, other.data, size * sizeof(int));
        }
        return *this;
    }
    
    // Example method to demonstrate copying
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MyClass obj1(5); // Creating object with size 5
    //for (int i = 0; i < 5; ++i) {
        obj1.display(); // Displaying initial values (0 0 0 0 0)
  //  }
    
    MyClass obj2 = obj1; // Copy constructor called
    obj2.display(); // Displaying copied values (0 0 0 0 0)
    
    MyClass obj3(3); // Creating object with size 3
    obj3.display(); // Displaying initial values (0 0 0)
    
    obj3 = obj1; // Assignment operator called
    obj3.display(); // Displaying copied values (0 0 0 0 0)
    
    return 0;
}

