#include <iostream>
#include <cmath>
using namespace std;

int main() {
int p,r,n,t;

cout << "principal amount: ";
cin >> p;
cout << "rate of interest: ";
cin >>r;
cout << "times interest applied: ";
cin >> n;
cout << "no of years: ";
cin >>t;

int CI;
CI = p*pow(1+r/n,n*t);
cout << "Compound interest = " << CI;
return 0;
}