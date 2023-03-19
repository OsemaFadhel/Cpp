#include <iostream>
#include <cmath>

using namespace std;

//formula c= sqr a^2 + b^2  

int main() {

    double a;
    double b;
    double c;

    cout << "Enter side a A: ";
    cin >> a;
    cout << "Enter side B: ";
    cin >> b;

    a = pow(a, 2);         //or for short line write:  c = sqrt(pow(a, 2) + pow(b, 2));
    b = pow(b, 2),
    c = sqrt(a + b);

    cout << "side C: " << c;

    return 0;
}


