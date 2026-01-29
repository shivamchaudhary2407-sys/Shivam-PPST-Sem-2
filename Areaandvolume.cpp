#include <iostream>
using namespace std;

int main() {
    float side , length , breadth , height;

    // Square
    cout << "Enter side of square: ";
    cin  >> side;
    cout << "Area of square = " << side*side << endl;

    // Rectangle
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle = " << length*breadth << endl; 

    // Equilateral Triangle 
    cout << "Enter side of equilateral triangle: ";
    cin >> side;
    cout << "Area of triangle = " << (3.14*side*side)/4 << endl;

    // Cube
    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of cube = " << side*side*side << endl;

    return 0;
}