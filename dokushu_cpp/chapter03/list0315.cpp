#include <iostream>
#include <bits/stdc++.h>

class Shape
{
public:
    virtual float area() const = 0;
    virtual float perimeter() const = 0;
};

class Rectangle: public Shape
{
    float height;
    float width;
public:
    explicit Rectangle(float height, float width);
    float area() const override;
    float perimeter() const override;
};

Rectangle::Rectangle(float height, float width)
: height(height), width(width)
{

}

float Rectangle::area() const
{
    return height * width;
}

float Rectangle::perimeter() const
{
    return (height + width) * 2;
}

class Circle: public Shape
{
    float radius;
public:
    explicit Circle(float radius);
    float area() const override;
    float perimeter() const override;    
};

Circle::Circle(float radius)
: radius(radius)
{

}

float Circle::area() const
{
    return radius * radius * M_PI;
}

float Circle::perimeter() const
{
    return 2 * M_PI * radius;
}

int main()
{
    Rectangle rect(10, 2);
    std::cout << "rect" << std::endl;
    std::cout << " Area: " << rect.area() << std::endl;
    std::cout << " Perimeter: " << rect.perimeter() << std::endl;

    Circle circle(4);
    std::cout << "circle" << std::endl;
    std::cout << " Area: " << circle.area() << std::endl;
    std::cout << " Perimter: " << circle.perimeter() << std::endl;
}
