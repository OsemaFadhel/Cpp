#include <iostream>

using namespace std;

// return = return a value back to the spot
//          where u called the encompassing function

double square(double length);
double cube(double length);

int main(){

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);
    cout << "Area: " << area << "cm^2" << endl;
    cout << "Volume: " << volume << "cm^3" << endl;

    return 0;
}
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}