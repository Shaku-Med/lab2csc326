// Circle.cpp

#include "Circle.h"
#include <cmath>
#include <iostream>

// Constructors
Circle::Circle() : x(0), y(0), radius(0.0) {}

Circle::Circle(int x, int y, double radius) : x(x), y(y), radius(radius) {}

// Getters
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
    std::cout << "Center: (" << x << ", " << y << "), Radius: " << radius << std::endl;
}
