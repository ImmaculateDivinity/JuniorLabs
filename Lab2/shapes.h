//
// Created by Kyle Zheng on 10/8/23.
//

#ifndef LAB2_SHAPES_H
#define LAB2_SHAPES_H
#include <iostream>
using namespace std;
class rectangleType; //forward declaration used to resolve the issue of the operator> overloading
class circleType
{
    friend bool operator>(const circleType& circle, const rectangleType& rect);

public:
//Overload the operator+ as a member function
    double operator+(circleType&);
    void setRadius(double r);
//Function to set the radius.
//Postcondition: if (r >= 0) radius = r;
//otherwise radius = 0;
    double getRadius();
//Function to return the radius.
//Postcondition: The value of radius is returned.
    double area() const;
//Function to return the area of a circle.
//Postcondition: Area is calculated and returned.
    circleType(double r);
//Constructor with a default parameter.
//Radius is set according to the parameter.
//The default value of the radius is 0.0;
//Postcondition: radius = r;
    circleType();
//default constructor circleType (radius = 0)
private:
    double radius;
};
class rectangleType
{
//Overload the operator +
friend double operator+(const rectangleType& rect1, const rectangleType& rect2);
friend bool operator>(const rectangleType& rect, const circleType& circle);

public:
    void setLength(double l);

    //did not use as a member function because it needs two parameters
    //Function to set the length.
//Postcondition: if (l >= 0) length = l;
// otherwise length = 0;
    void setWidth(double w);
//Function to set the width;
//Postcondition: if (w >= 0) width = w;
// otherwise width = 0;
    double getLength();
//Function to return the length.
//Postcondition: The value of length is returned.
    double getWidth();
//Function to return the width.
//Postcondition: The value of width is returned.
    double area() const;
//Function to return the area of a rectangle.
//Postcondition: Area is calculated and returned.
    rectangleType(double l, double w);
//Constructor with a default parameters.
//Length and width are set according to the parameter.
//The default value of the length is 0.0;
//The default value of the width is 0.0;
//Postcondition: Length = l, width = w.
    rectangleType();
//default constructor rectangleType(double l = 0, double w = 0);
private:
    double length, width;
};

#endif //LAB2_SHAPES_H
