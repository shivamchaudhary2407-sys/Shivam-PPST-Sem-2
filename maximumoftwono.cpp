// Maximum of two number
#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    if(a>b) {
        cout << "Maximum number = " << a << endl;
    }
    else {
        cout << "Maximum number = " << b << endl;
    }
    return 0;
}
