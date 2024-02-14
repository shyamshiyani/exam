#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0;
};

class Circle : public Shape {
protected:
    double radius, area;

public:
    void setRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void calculateArea() {
        area = 3.14 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
};

class Rectangle : public Shape {
protected:
    double length, width, area;

public:
    void setDimensions() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }

    void calculateArea() {
        area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
    }
};

int main() {
    Circle c;
    c.setRadius();
    c.calculateArea();

    Rectangle r;
    r.setDimensions();
    r.calculateArea();

    return 0;
}

