#include <iostream>

using namespace std;

void calculateArea() {
    int choice;
    cout << "Choose a shape to calculate its area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Square" << endl;
    cout << "5. Parallelogram" << endl;
    cout << "6. Trapezoid" << endl;
    cout << "7. Ellipse" << endl;
    cout << "8. Rhombus" << endl;
    cout << "9. Hexagon" << endl;
    cout << "10. Pentagon" << endl;
    cout << "11. Exit" << endl;
    cout << "Enter your choice (1-11): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = 3.14159 * radius * radius;
            cout << "The area of the circle is: " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
            break;
        }
        case 4: {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            double area = side * side;
            cout << "The area of the square is: " << area << endl;
            break;
        }
        case 5: {
            double base, height;
            cout << "Enter the base of the parallelogram: ";
            cin >> base;
            cout << "Enter the height of the parallelogram: ";
            cin >> height;
            double area = base * height;
            cout << "The area of the parallelogram is: " << area << endl;
            break;
        }
        case 6: {
            double base1, base2, height;
            cout << "Enter the first base of the trapezoid: ";
            cin >> base1;
            cout << "Enter the second base of the trapezoid: ";
            cin >> base2;
            cout << "Enter the height of the trapezoid: ";
            cin >> height;
            double area = 0.5 * (base1 + base2) * height;
            cout << "The area of the trapezoid is: " << area << endl;
            break;
        }
        case 7: {
            double majorAxis, minorAxis;
            cout << "Enter the major axis of the ellipse: ";
            cin >> majorAxis;
            cout << "Enter the minor axis of the ellipse: ";
            cin >> minorAxis;
            double area = 3.14159 * majorAxis * minorAxis;
            cout << "The area of the ellipse is: " << area << endl;
            break;
        }
        case 8: {
            double diagonal1, diagonal2;
            cout << "Enter the first diagonal of the rhombus: ";
            cin >> diagonal1;
            cout << "Enter the second diagonal of the rhombus: ";
            cin >> diagonal2;
            double area = 0.5 * diagonal1 * diagonal2;
            cout << "The area of the rhombus is: " << area << endl;
            break;
        }
        case 9: {
            double side;
            cout << "Enter the side length of the hexagon: ";
            cin >> side;
            double area = (3 * 1.73205 * side * side) / 2; // 1.73205 is an approximation of sqrt(3)
            cout << "The area of the hexagon is: " << area << endl;
            break;
        }
        case 10: {
            double side, apothem;
            cout << "Enter the side length of the pentagon: ";
            cin >> side;
            cout << "Enter the apothem of the pentagon: ";
            cin >> apothem;
            double area = (5 * side * apothem) / 2;
            cout << "The area of the pentagon is: " << area << endl;
            break;
        }
        case 11:
            cout << "Exiting the program. Goodbye!" << endl;
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
    
    // Call the function recursively for the next calculation
    calculateArea();
}

int main() {
    calculateArea();
    return 0;
}