//
// Created by Tareq Younis on 25/12/2025.
//

#include "Vec3.h"
#include <cmath>

Vec3::Vec3() {
    x = 0;
    y = 0;
    z = 0;
}

Vec3::Vec3(double x, double y, double z) {
    this->x = x;  //Sets CLASS x to INPUT x
    this->y = y;
    this->z = z;
}

Vec3 Vec3::add(const Vec3 &other) {
    Vec3 result;
    result.x = this->x + other.x;
    result.y = this->y + other.y;
    result.z = this->z + other.z;
    return result;
}

Vec3 Vec3::subtract(const Vec3 &other) {
    Vec3 result;
    result.x = this->x - other.x;
    result.y = this->y - other.y;
    result.z = this->z - other.z;
    return result;
}

Vec3 Vec3::scale(double scalar) {
    Vec3 result;
    result.x = this->x * scalar;
    result.y = this->y * scalar;
    result.z = this->z * scalar;
    return result;
}

double Vec3::magnitude() {
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

void Vec3::normalize() {
    double m = magnitude(); // 1. Measure the length ONCE and save it.

    // 2. Check if length is greater than a tiny number (to avoid dividing by zero)
    if (m > 0) {
        this->x /= m;
        this->y /= m;
        this->z /= m;
    }
    // If m is 0, we just do nothing.
    // (Printing error messages in math classes is usually avoided to keep things fast!)
}



