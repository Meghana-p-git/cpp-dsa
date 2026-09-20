#include <iostream>

class DB; // Forward declaration for friend function

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    friend DM add(DM d, DB b);

    void display() {
        std::cout << "Distance: " << meters << " meters and " << centimeters << " centimeters" << std::endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int f = 0, int in = 0) : feet(f), inches(in) {}

    friend DM add(DM d, DB b);

    void display() {
        std::cout << "Distance: " << feet << " feet and " << inches << " inches" << std::endl;
    }
};

DM add(DM d, DB b) {
    int totalCentimeters = d.meters * 100 + d.centimeters + (b.feet * 30.48) + (b.inches * 2.54);
    int newMeters = totalCentimeters / 100;
    int newCentimeters = totalCentimeters % 100;
    return DM(newMeters, newCentimeters);
}

int main() {
    DM d1(5, 26);
    DB b1(4, 6);
    
    std::cout << "DM object 1: ";
    d1.display();
    std::cout << "DB object 1: ";
    b1.display();
    
    DM result = add(d1, b1);
    std::cout << "Addition result: ";
    result.display();
    
    return 0;
}
