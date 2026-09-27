#include <iostream>

class Color {
public:
    int red, green, blue;

    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
};

class FStyle {
public:
    static const int SOLID_FILL = 1;
    // Add more fill styles as needed
};

class Shape {
protected:
    int x, y;
    Color fillcolor;
    int fillstyle;

public:
    Shape(int x, int y, Color cWide, int fStyle) : x(x), y(y), fillcolor(cWide), fillstyle(fStyle) {}

    virtual void draw() {
        std::cout << "Drawing shape at coordinates (" << x << ", " << y << ") with fill color " << fillcolor.red << ", " << fillcolor.green << ", " << fillcolor.blue << " and fill style " << fillstyle << std::endl;
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int x, int y, Color cWide, int fStyle, int r) : Shape(x, y, cWide, fStyle), radius(r) {}

    void draw() override {
        Shape::draw();
        std::cout << "Drawing circle with radius " << radius << std::endl;
    }
};

class Rectangle : public Shape {
private:
    int length, width;

public:
    Rectangle(int x, int y, Color cWide, int fStyle, int len, int wid) : Shape(x, y, cWide, fStyle), length(len), width(wid) {}

    void draw() override {
        Shape::draw();
        std::cout << "Drawing rectangle with length " << length << " and width " << width << std::endl;
    }
};

int main() {
    Color red(255, 0, 0);
    int solidFill = FStyle::SOLID_FILL;

    Circle circle(30, 40, red, solidFill, 15);
    circle.draw();

    Rectangle rectangle(50, 60, red, solidFill, 20, 30);
    rectangle.draw();

    return 0;
}

