//
// Created by Kyle Zheng on 10/7/23.
//
//Implementation File for the class circleType

#include "shapes.h"

using namespace std;

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

double circleType::area()
{
    return 3.1416 * radius * radius;
}

double circleType::circumference()
{
    return 2 * 3.1416 * radius;
}

circleType::circleType(double r)
{
    setRadius(r);
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

double rectangleType::getWidth()
{
    return width;
}

double rectangleType::getLength()
{
    return length;
}

double rectangleType::perimeter()
{
    return (2 * length + width * 2);
}

double rectangleType::area()
{
    return length * width;
}

rectangleType::rectangleType(double l, double w)
{
    setWidth(w);
    setLength(l);
}
