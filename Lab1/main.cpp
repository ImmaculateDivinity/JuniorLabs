//The user program that uses the class circleType

#include <iostream>
#include <iomanip>
#include "shapes.h"
using namespace std;

int main()
{
//Add all needed variables
    int option;
    double radius, area, length, width, recArea, circumference, perimeter;
    // Add variable for class objects here, for example:
    circleType circle1;
    rectangleType rectangle1;

    do {
        //Loop menu option until user enter 3 to exit.
        cout << "Choose an option to calculate:" << endl
             << "1. Calculate circle area." << endl
             << "2. Calculate circle circumference." << endl
             << "3. Calculate rectangle area." << endl
             << "4. Calculate rectangle perimeter." << endl
             << "5. Exit" << endl
             << "Enter an option: ";

        cin >> option;
        switch (option) //Menu options selected by switch method.
        {
            case 1:
                //Follw the steps below to use the obect circle1 to calculate the area of a circle
                // 1. Ask user for radius of circle
                cout << "Enter a radius: ";
                cin >> radius;
                // 2. Set the radius of circle
                circle1.setRadius(radius);
                //3. Calculate area of circle
                area = circle1.area();
                //print out the area of circle
                cout << " The area of the circle is " << area << endl;
                break;
            case 2:
                cout << "Enter a radius: ";
                cin >> radius;
                // 2. Set the radius of circle
                circle1.setRadius(radius);
                //3. Calculate area of circle
                circumference = circle1.circumference();
                //print out the area of circle
                cout << " The circumference of the circle is " << circumference << endl;
                break;
            case 3:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                rectangle1.setLength(length);
                rectangle1.setWidth(width);
                recArea = rectangle1.area();

                cout << "The area of the rectangle is: " << recArea << endl;
                break;
            case 4:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                rectangle1.setLength(length);
                rectangle1.setWidth(width);
                perimeter = rectangle1.perimeter();

                cout << "The perimeter of the rectangle is: " << perimeter << endl;
                break;
            case 5:
                //Exit option
                cout << "You chose to exit the menu" << endl;
                break;
            default:
                //Default when user enters an error.
                cout << "Choice is invalid." << endl << endl;
        }
    } while (option != 5);
    return 0;
}
