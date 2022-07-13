#include <iostream>

class vector3d
{
public:
    using vec_type = int;
    vec_type get_x();
    void set_x(vec_type new_value);
    vec_type get_y();
    void set_y(vec_type new_value);
    vec_type get_z();
    void set_z(vec_type new_value);
private:
    vec_type x;
    vec_type y;
    vec_type z;
};

vector3d::vec_type vector3d::get_x()
{
    return x;
}
void vector3d::set_x(vec_type new_value)
{
    x = new_value;
}

vector3d::vec_type vector3d::get_y()
{
    return y;
}
void vector3d::set_y(vec_type new_value)
{
    y = new_value;
}

vector3d::vec_type vector3d::get_z()
{
    return z;
}
void vector3d::set_z(vec_type new_value)
{
    z = new_value;
}

int main()
{
    using vec_type = vector3d::vec_type;
    std::cout << "x: ";
    vec_type x;
    std::cin >> x;
    std::cout << "y: ";
    vec_type y;
    std::cin >> y;
    std::cout << "z: ";
    vec_type z;
    std::cin >> z;
    
    vector3d v1;
    v1.set_x(x);
    v1.set_y(y);
    v1.set_z(z);

    std::cout << v1.get_x() << ", ";
    std::cout << v1.get_y() << ", ";
    std::cout << v1.get_z() << std::endl;

}