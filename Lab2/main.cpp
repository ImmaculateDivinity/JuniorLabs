#include <iostream>
#include <iomanip>
#include "shapes.h"
using namespace std;

int main()
{
    int option;
    double rad1, rad2, length1, length2, width1, width2;
    circleType circle1, circle2;
    rectangleType rectangle1, rectangle2;
    do {
        cout << "\nChoose an option to calculate:" << endl
             << "1. Add the area of two circles." << endl
             << "2. Add the area of two rectangles." << endl
             << "3. Compare the area of a circle and rectangle. Which is larger" << endl
                << "4. Exit" << endl
                << "Enter an option: ";
        cin >> option;
        //error checking below

        if (cin.fail()) {
            cin.clear(); // Clear the error state
            cin.ignore(1000, '\n'); // Skip bad input
            cout << "Invalid input. Please enter an integer between 1 and 4." << endl;
            continue; // Skip the rest of the loop to prevent bad option value from getting to switch
        }

        if (option < 1 || option > 4) {
            cout << "Invalid range. Please enter an integer between 1 and 4." << endl;
            continue; // Skip the rest of the loop
        }
        switch (option)
        {
            case 1:
                cout << "Enter radius for circle 1: ";
                cin >> rad1;
                cout << "Enter radius for circle 2: ";
                cin >> rad2;
                circle1.setRadius(rad1);
                circle2.setRadius(rad2);
                cout << "The sum of areas for both circles is " << circle1 + circle2 << endl;
                break;
            case 2:
                cout << "Enter length for rectangle 1: ";
                cin >> length1;
                if(cin.fail() || length1 < 0) {
                    cout << "Invalid input. Please enter a positive number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter width for rectangle 1: ";
                cin >> width1;
                if(cin.fail() || width1 < 0) {
                    cout << "Invalid input. Please enter a positive number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter length for rectangle 2: ";
                cin >> length2;
                if(cin.fail() || length2 < 0) {
                    cout << "Invalid input. Please enter a positive number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter width for rectangle 2: ";
                cin >> width2;
                rectangle1.setLength(length1);
                rectangle1.setWidth(width1);
                rectangle2.setLength(length2);
                rectangle2.setWidth(width2);
                cout << "The sum of areas for both rectangles is " << rectangle1 + rectangle2 <<endl;
                //overloaded function student wrote 57
                break;
            case 3:
                cout << "Enter radius for the circle: ";
                cin >> rad1;
                if(cin.fail() || rad1 < 0) {
                    cout << "Invalid input. Please enter a positive number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter length for the rectangle: ";
                cin >> length1;
                if(cin.fail() || length1 < 0) {
                    cout << "Invalid input. Please enter a positive number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter width for the rectangle: ";
                cin >> width1;
                if(cin.fail() || width1 < 0) {
                    cout << "Invalid input. Please enter a positive number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                circle1.setRadius(rad1);
                rectangle1.setLength(length1);
                rectangle1.setWidth(width1);
                if(rectangle1 > circle1) {
                    cout << "The area of the rectangle " << rectangle1.area() << " which is greater than the area of the circle " << circle1.area() << endl;
                } else if(circle1 > rectangle1) {
                    cout << "The area of the circle " << circle1.area() << " which is greater than the area of the rectangle " << rectangle1.area() << endl;
                } else {
                    cout << "The area of the circle is equal to the area of the rectangle." << endl;
                }
                break;
            case 4:
                cout << "Exiting, thank you.\n";
                break;
            default:
                cout << "Choice is invalid. Try again." << endl << endl;
        }
    } while (option != 4);
    return 0;
}
