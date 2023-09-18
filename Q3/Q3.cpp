#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    Circle() : radius(0.0) {}

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double calculateArea() const {
        return 3.14159265359 * radius * radius;
    }
};

int main() {
    Circle obj1(5.0);
    Circle obj2;

    Circle* p1;
    Circle* p2;

    Circle* p3 = new Circle[2];

    p1 = &obj1;
    p2 = &obj2;

    p1->setRadius(10.0);
    p2->setRadius(7.0);

    p3[0].setRadius(3.0);
    p3[1].setRadius(8.0);

    std::cout << "Radius of obj1: " << obj1.getRadius() << std::endl;
    std::cout << "Area of obj1: " << obj1.calculateArea() << std::endl;
    std::cout << "Radius of obj2: " << obj2.getRadius() << std::endl;
    std::cout << "Area of obj2: " << obj2.calculateArea() << std::endl;
    std::cout << "Radius of p3[0]: " << p3[0].getRadius() << std::endl;
    std::cout << "Area of p3[0]: " << p3[0].calculateArea() << std::endl;
    std::cout << "Radius of p3[1]: " << p3[1].getRadius() << std::endl;
    std::cout << "Area of p3[1]: " << p3[1].calculateArea() << std::endl;

    delete[] p3;

    return 0;
}


/*

 ### OUTPUT


    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ g++ ./q3.cpp

    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ g++ ./q3.cpp

    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ ./a.out

    Radius of obj1: 10
    Area of obj1: 314.159
    Radius of obj2: 7
    Area of obj2: 153.938
    Radius of p3[0]: 3
    Area of p3[0]: 28.2743
    Radius of p3[1]: 8
    Area of p3[1]: 201.062


        ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ g++ ./q3.cpp

    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ g++ ./q3.cpp

    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ ./a.out
    Radius of obj1: 10
    Area of obj1: 314.159
    Radius of obj2: 7
    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ ./a.out
    Radius of obj1: 10
    Area of obj1: 314.159
    Radius of obj2: 7
    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ g++ ./q3.cpp

    ┌──(medzy㉿MedzyEmsAmara)-[/mnt/c/Users/amara_7pmmlhe/Downloads/TOD/q3]
    └─$ ./a.out
    Radius of obj1: 10
    Area of obj1: 314.159
    Radius of obj2: 9
    Area of obj2: 254.469
    Radius of p3[0]: 3
    Area of p3[0]: 28.2743
    Radius of p3[1]: 8
    Area of p3[1]: 201.062

*/