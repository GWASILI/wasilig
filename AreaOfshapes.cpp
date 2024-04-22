#include <iostream>
using namespace std;
//Using Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

//Using Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

//Using Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    char choice;

    do {
        // Displaying the option and prompt user to choose
        cout << "Select a shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;

        // Check if the input is valid
        if (choice != '1' && choice != '2' && choice != '3') {
            cout << "Invalid input. Please enter 1, 2, or 3.\n";
            continue;
        }

        double area;
        double base, height, length, width, side;

        // Calculate area based on user's choice
        switch (choice) {
            case '1':
                cout << "Enter the base and height of the triangle: ";
                cin >> base>>height;
                area = calculateTriangleArea(base, height);
                cout << "The area of the triangle is: " << area << endl;
                break;


            case '2':
                cout << "Enter the length   and width of the rectangle: ";
                cin >> length>>width;            
                area = calculateRectangleArea(length, width);
                cout << "The area of the rectangle is: " << area << endl;
                break;

            case '3':
                cout << "Enter the side length of the square: ";
                cin >> side;
                area = calculateSquareArea(side);
                cout << "The area of the square is: " << area << endl;
                break;
        }

        //if the user wants to continue ask this
        cout << "Do you want to calculate the area of another shape? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
