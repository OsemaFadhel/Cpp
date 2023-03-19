#include <iostream>

using namespace std;

// array = a data structure that can hold multiple values
//         values are accessed by an index number
//         "kind of like a variable that holds multiple values"

int main(){

    string car[] = {"Corvette", "Mustang", "Camry"};
    
    car[0] = "Camaro"; // this will change the value

    cout << car[0] << endl;
    cout << car[1];

   
   
    //you can also create first and then add later 

    double prices[4];
    //            ^ this will say how many will contain
    prices[0] = 5.02;
    prices[1] = 2.0;
    prices[2] = 6.1;
    prices[3] = 1.1;
    
    return 0;
}