// maximum of 3 number 
#include <iostream>
using namespace std;

int main() {
    int a , b ,c;
    cout << "Enter three numbers:";
    cin >> a >> b >> c;
    if(a>b && a>c) {
        cout << "maximun number = " << a << endl;
    }
    else if(b>a && b>c) {
        cout << "maximun number = " << b << endl;
    }
    else if(c>a && c>b) {
        cout << "maximum number = " << c << endl;
    }
    return 0;
}


