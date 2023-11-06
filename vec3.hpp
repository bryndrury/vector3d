#ifndef VEC3_HPP
#define VEC3_HPP

#include <cmath>
#include <iostream>
#include <vector>

class vec3 {
public:
    // Constructors
    vec3() : _x(0), _y(0), _z(0) {};
    vec3(double x, double y, double z) : _x(x), _y(y), _z(z) {};
    vec3(const vec3& u) : _x(u._x), _y(u._y), _z(u._z) {};
    vec3(double i) : _x(i), _y(i), _z(i) {};

    // Destructor
    ~vec3() {};

    // Getters
    double x() const { return _x; };
    double y() const { return _y; };
    double z() const { return _z; };
    std::vector<double> getValues() const { return {_x, _y, _z}; };

    // Setters
    void setX(double x) { _x = x; };
    void setY(double y) { _y = y; };
    void setZ(double z) { _z = z; };
    void setValues(double x, double y, double z) { _x = x; _y = y; _z = z; };

    // Operators - Setters
    vec3& operator=(const double i);
    vec3& operator=(const vec3 &u);
    vec3& operator=(const std::vector<double> &u);
    vec3& operator=(const int *i);

    // Return - Operators - Arithmetic
    vec3 operator+(const vec3 &u) const;
    vec3 operator-(const vec3 &u) const;
    vec3 operator*(const vec3 &u) const;
    vec3 operator*(const double i) const;
    vec3 operator/(const double i) const;

    // Assign - Operators - Arithmetic
    vec3& operator+=(const vec3 &u);
    vec3& operator-=(const vec3 &u);
    vec3& operator*=(const vec3 &u);
    vec3& operator*=(const double i);
    vec3& operator/=(const double i);

    // Methods
    double len() const;
    double lenSqrt() const;
    vec3 norm() const;
    vec3 fnorm() const;
    vec3 cross(const vec3 &u) const;
    double dot(const vec3 &u) const;
    double ang(const vec3 &u) const;
    double dist(const vec3 &u) const;

    void out() const;
    int size() const;

private:
    double _x, _y, _z;
};

#endif // VEC3_HPP