#include <iostream>
using namespace std;

int main() {
    int ch;
    int a,b;
    cout << "Enter your choice: ";
    cin >> ch;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    switch(ch)
    {
        case 1:
        cout << a+b << endl;
        break;
        case 2:
        cout << a-b << endl;
        break;
        case 3:
        cout << a*b << endl;
        break;
        case 4:
        cout << a/b << endl;
        break;
        
        default:
        cout << "user entered wrong choice";
    }
    return 0;
}