#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;
    if(marks>=75) {
        cout << "distinction" << endl;
    }
    else if(marks>=60 && marks<75) {
        cout << "first class" << endl;
    }
    else if(marks>=50 && marks<60) {
        cout << "second class" << endl;
    }
    else if(marks>=40 && marks<50) {
        cout << "pass" << endl;
    }
    else {
        cout << "fail" << endl;
    }
    return 0;
    }

