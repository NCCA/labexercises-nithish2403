#ifndef VEC3_H_
#define VEC3_H_

struct Vec3
{
    Vec3()=default;
    Vec3(const Vec3 &)=default;
    
    //This allows us to set up a vector with three values x, y, z
    Vec3(float _x, float _y, float _z) :
    //Constructor to set up x, y, z
    x{_x}, y{_y}, z{_z}{}

    //Sets up the operators to allow us to multiply, add, add equals and add a float.
    Vec3 operator *(const Vec3 &_rhs) const;
    Vec3 operator +(const Vec3 &_rhs) const;
    Vec3 operator *(float _rhs) const;
    void operator +=(const Vec3 &_rhs);

    //This defaults the values to 0
    float x=0.0f;
    float y=0.0f;
    float z=0.0f;
};

#endif