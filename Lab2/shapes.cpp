//
// Created by Kyle Zheng on 10/8/23.
//


//Implementation File for the class shapesType
#include <iostream>
#include "shapes.h"
using namespace std;
double circleType::operator+(circleType& circle1)
{
    return circle1.area() + area();
}
void circleType::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}
double circleType::getRadius()
{
    return radius;
}
double circleType::area() const
{
    return 3.1416 * radius * radius;
}
circleType::circleType(double r)
{
    setRadius(r);
}
circleType::circleType()
{
    radius = 0;
}

void rectangleType::setLength(double l)
{
    if (l >= 0)
        length = l;
    else
        length = 0;
}
void rectangleType::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
        width = 0;
}
double rectangleType::getLength()
{
    return length;
}
double rectangleType::getWidth()
{
    return width;
}
double rectangleType::area() const {
    return length * width;
}

double operator+(const rectangleType& rect1, const rectangleType& rect2)
{
    return rect1.area() + rect2.area();
}
bool operator>(const rectangleType& rect, const circleType& circle) {
    return rect.area() > circle.area();
}
bool operator>(const circleType& circle, const rectangleType& rect) {
    return circle.area() > rect.area();
}
rectangleType::rectangleType(double l, double w)
{
    setLength(l);
    setWidth(w);
}
rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

