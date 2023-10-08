//
// Created by Kyle Zheng on 10/7/23.
//

#ifndef LAB1_SHAPES_H
#define LAB1_SHAPES_H
class circleType
{
public:
    void setRadius(double r);
    double getRadius();
    double area();
    double circumference();
    circleType(double r = 0);
private:
    double radius;
};

class rectangleType
{
public:
    void setLength(double l);
    void setWidth(double w);
    double getLength();
    double getWidth();
    double area();
    double perimeter();
    rectangleType(double l = 0, double w = 0);

private:
    double length, width;
};
#endif //LAB1_SHAPES_H
