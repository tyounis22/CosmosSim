//
// Created by Tareq Younis
//

#pragma once

class Vec3 {
public:
    double x, y, z;

    Vec3(); //default constructor, initializes to 0,0,0
    Vec3(double x, double y, double z); //parametrized constructor, intializes to specific value

    Vec3 add(const Vec3& other);
    Vec3 subtract(const Vec3& other); //pass by reference
    Vec3 scale(double scalar);  //pass by value

    double magnitude();
    void normalize();


};




