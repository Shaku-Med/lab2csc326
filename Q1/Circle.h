#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    int x;
    int y;
    double radius;

public:
    // Constructors
    Circle();
    Circle(int x, int y, double radius);

    // Getters
    int getX() const;
    int getY() const;
    double getRadius() const;

    // Setter
    void set(int x, int y, double radius);

    // Calculate area
    double area() const;

    // Calculate perimeter
    double perimeter() const;

    // Calculate distance from origin (0, 0)
    double distanceFromOrigin() const;

    // Calculate distance between two circles' centers
    double distanceBetweenCenters(const Circle& other) const;

    // Print circle information
    void print() const;
};

#endif
