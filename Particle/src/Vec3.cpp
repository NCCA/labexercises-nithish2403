#include "Vec3.h"

//Sets up the multiplier operator
Vec3 Vec3::operator *(const Vec3 &_rhs) const
{
    return Vec3(x*_rhs.x, y*_rhs.y, z*_rhs.z);
}

//Sets up addition operator
Vec3 Vec3::operator +(const Vec3 &_rhs) const
{
    return Vec3(x+_rhs.x,y+_rhs.y,z+_rhs.z);
}

//sets up multiplication of a float to the vector
Vec3 Vec3::operator *(float _rhs) const
{
    return Vec3(x*_rhs,y*_rhs,z*_rhs);
}

//Sets up add equal operator
void Vec3::operator+=(const Vec3 &_rhs)
{
    x+=_rhs.x;
    y+=_rhs.y;
    z+=_rhs.z;

}