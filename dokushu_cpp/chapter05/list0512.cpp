#include <iostream>

class Rectangle
{
    float width;
    float height;
public:
    explicit Rectangle(float width, float height);
    float area() const;
};

Rectangle::Rectangle(float width, float height)
    : width(width), height(height) {}

float Rectangle::area() const
{
    return width * height;
}

int main()
{
    Rectangle* rect = new Rectangle{8.0f, 5.0f};
    std::cout << "面積: " << rect->area() << std::endl;
    delete rect;
}