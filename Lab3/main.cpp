#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(int list[], int length);
int main() {
    int option;
    bool listPopulated = false;
    do {
        do {
            try {
                cout << "Menu of options: \n"
                     << "1. Enter 5 test scores and calculate the average.\n"
                     << "2. Sort the list from smallest to largest.\n"
                     << "3. Exit\n"
                     << "Enter an option: ";
                cin >> option;
                if (cin.fail())
                    throw option;
            }
            catch (int) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "Input Error, enter 1, 2, or 3: ";
                cin >> option;
            }
        } while (cin.fail());

        switch (option)
        {
            int test[5];
            case 1:
            {
                int sum = 0;
                double average;
                int index;
                cout << fixed << showpoint << setprecision(2);
                cout << "Enter five test scores: ";
                for (index = 0; index < 5;) {
                    try {
                        cin >> test[index];
                        if (cin.fail() || test[index] < 0 || test[index] > 100)
                            throw test[index];
                        else {
                            sum = sum + test[index];
                            index++;
                        }
                    }
                    catch (int) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "Input Error, enter a number between 0-100: ";
                    }
                }
                average = sum / 5.0;
                cout << "The average test score = " << average << endl;
                listPopulated = true;
                break;
            }
            case 2:
                //note to Professor Nadia Isho, we were never told to use exception handling for this option, especially since it is not a user input.
                if (listPopulated == false) {
                    cout << "Array is empty please enter test scores first using option 1." << endl;
                    break;
                }
                selectionSort(test, 5);
                int index;
                cout << "After sorting from smallest to largest, the scores are: " << endl;
                for (index = 0; index < 5; index++)
                {
                    cout << test[index] << " ";
                }
                break;
            case 3:
                cout << "Thank you, GoodBye" << endl;
                break;
            default:
                cout << "Invalid choice, enter 1, 2, or 3\n";
        }
    } while (option != 3);
    return 0;
}

//selection sort algorithm

void selectionSort(int list[], int length)
{
    int index;
    int smallestIndex;
    int location;
    int temp;
    for (index = 0; index < length - 1; index++)
    {
//Step a
        smallestIndex = index;
        for (location = index + 1; location < length; location++)
            if (list[location] < list[smallestIndex])
                smallestIndex = location;
// Step b
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}
