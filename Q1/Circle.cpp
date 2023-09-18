// Circle.cpp

#include "Circle.h"
#include <cmath>
#include <iostream>
#include "Circle2.cpp"

using namespace std;

int Circle::getX() const {
    return x;
}

int Circle::getY() const {
    return y;
}

double Circle::getRadius() const {
    return radius;
}

// Setter
void Circle::set(int x, int y, double radius) {
    this->x = x;
    this->y = y;
    this->radius = radius;
}

// Calculate area
double Circle::area() const {
    return 2 * 3.14159 * radius * radius;
}

// Calculate perimeter
double Circle::perimeter() const {
    return 2 * 3.14159 * radius;
}

// Calculate distance from origin (0, 0)
double Circle::distanceFromOrigin() const {
    return sqrt(x * x + y * y);
}

// Calculate distance between two circles' centers
double Circle::distanceBetweenCenters(const Circle& other) const {
    return sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

// Print circle information
void Circle::print() const {
    cout << "Center: (" << x << ", " << y << "), Radius: " << radius << endl;
}

int main() {
    // Create Circle objects
    Circle circle1; // Using the default constructor
    Circle circle2(3, 4, 5.0); // Using the parameterized constructor

    // Print circle information
    cout << "Circle 1:" << endl;
    circle1.print();
    // 
    // 
    cout << "Area: " << circle1.area() << endl;
    cout << "Perimeter: " << circle1.perimeter() << endl;
    cout << "Distance from origin: " << circle1.distanceFromOrigin() << endl;
    // 
    // 
    cout << "\nCircle 2:" << endl;
    circle2.print();
    // 
    // 
    cout << "Area: " << circle2.area() << endl;
    cout << "Perimeter: " << circle2.perimeter() << endl;
    cout << "Distance from origin: " << circle2.distanceFromOrigin() << endl;
    // 
    // Calculate and print distance between centers
    double distanceBetweenCenters = circle1.distanceBetweenCenters(circle2);
    cout << "\nDistance between centers of Circle 1 and Circle 2: " << distanceBetweenCenters << endl;

    return 0;
}