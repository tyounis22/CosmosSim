//
// Created by Tareq Younis
//

#pragma once

class Vector3 {
public:
    double x, y, z;

    Vector3(); //default constructor, initializes to 0,0,0
    Vector3(double x, double y, double z); //parametrized constructor, intializes to specific value

    Vector3 add(const Vector3& other);
    Vector3 subtract(const Vector3& other); //pass by reference
    Vector3 scale(double scalar);  //pass by value

    double magnitude();
    void normalize();


};




