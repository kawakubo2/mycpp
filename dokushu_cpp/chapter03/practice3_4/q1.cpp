#include <iostream>

class vector3d
{
    float m_x = 0.0F;
    float m_y = 0.0F;
    float m_z = 0.0F;
public:
    vector3d();
    float x() const;
    float y() const;
    float z() const;
};

vector3d::vector3d()
{

}

float vector3d::x() const
{
    return m_x;
}
float vector3d::y() const
{
    return m_y;
}
float vector3d::z() const
{
    return m_z;
}

int main()
{
    vector3d v3;
    std::cout << "(" << v3.x() << ", " << v3.y() << ", " << v3.z() << ")" << std::endl;
}