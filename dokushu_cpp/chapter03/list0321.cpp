#include <iostream>

class vector3d
{
    float x;
    float y;
    float z;
public:
    vector3d();
    explicit vector3d(float x, float y, float z);
    friend vector3d add(const vector3d a, vector3d b);
    friend void print_vector3d(const vector3d v);
    void dump() const;
};

vector3d::vector3d()
: vector3d(0, 0, 0)
{

}

vector3d::vector3d(float x, float y, float z)
: x(x), y(y), z(z)
{

}


vector3d add(const vector3d a, const vector3d b)
{
    vector3d result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

void print_vector3d(const vector3d v)
{
    std::cout << v.x << " " << v.y << " " << v.z << std::endl;
}

int main()
{
    vector3d vec_a(1, 1, 1);
    vector3d vec_b(1, 2, 3);
    vector3d vec_c = add(vec_a, vec_b);
    print_vector3d(vec_c);
}