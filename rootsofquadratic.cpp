// Roots of Quadratic Equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a , b , c , D ;
    cin >> a >> b >> c;
    cout << "The General form of Quadratic equation : ";
    cout << "ax^2+bx+c" << endl;
    D = (b*b) - (4*a*c);
    if(D>0) {
        cout << "Roots are real and Distint" << endl;
        cout << "Roots 1 = " << (-b + sqrt(D)) / (2*a) << endl; 
        cout << "Roots 2 = " << (-b - sqrt(D)) / (2*a) << endl;
    }

else if(D==0) {
    cout << "Roots are real and equal" << endl;
    cout << "Roots 1 = " << (-b + sqrt(D)) / (2*a) << endl;
    cout << "Roots 1 = " << (-b - sqrt(D)) / (2*a) << endl;
}
else {
    cout << "Roots are imaginary" << endl;
    cout << "Roots 1 = " << (-b + sqrt(D)) / (2*a) << endl;
    cout << "Roots 1 = " << (-b - sqrt(D)) / (2*a) << endl;
}
return 0;
}

