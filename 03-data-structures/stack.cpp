#include <iostream>
using namespace std;
class STACK {
private:
    int *arr; // Array to store stack elements
    int top;  // Index of the top element
    int capacity; // Capacity of the stack

public:
    STACK(int size = 10) : top(-1), capacity(size) {
        arr = new int[capacity];
    }

    // Destructor to deallocate memory
    ~STACK() {
        delete[] arr;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }
    int pop(){
    if(isEmpty()){
    std::cout<<"stack is empty"<<std::endl;
    return -1;}
    return arr[top--];}
    // Overloading the '+' operator to push an element onto the stack
    STACK& operator+(int element) {
        if (isFull()) {
            std::cout << "Stack Overflow!" << std::endl;
            return *this;
        }
        arr[++top] = element;
        return *this;
        
    }

    // Overloading the '-' operator to pop the top element from the stack
   /* int operator--() {
        if (isEmpty()) {
            std::cout << "Stack Underflow!" << std::endl;
            return -1;
        }
        return arr[top--];
    }*/

    // Overloading the '<<' operator to display the contents of the stack
    friend std::ostream& operator<<(std::ostream& os, const STACK& stack) {
        os << "Stack Contents: ";
        for (int i = stack.top; i >= 0; --i) {
            os << stack.arr[i] << " ";
        }
        os << std::endl;
        return os;
    }
};

int main() {
    STACK S1(5); // Creating a stack of size 5
    
    // Adding elements to the stack
    S1 = S1 + 10;
    S1 = S1 + 20;
    S1 = S1 + 30;

    // Displaying the stack contents
    std::cout << S1;

    // Popping elements from the stack
    int element = S1.pop();
    std::cout << "Popped element: " << element << std::endl;
    //S1=S1.pop(10);
    // Displaying the stack contents after popping
    std::cout << S1;

    return 0;
}

