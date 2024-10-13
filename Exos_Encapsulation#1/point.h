#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <sstream>  
#include <iomanip>


class Point {
public:
    float x, y, z;

    Point(float x_val = 0.0, float y_val = 0.0, float z_val = 0.0);

    std::string ToString() const;

};
Point::Point(float x_val, float y_val, float z_val) : x(x_val), y(y_val), z(z_val) {}

std::string Point::ToString() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(5);
    oss << "Point: x: " << x << ", y: " << y << ", z: " << z;
    return oss.str();
}
#endif
