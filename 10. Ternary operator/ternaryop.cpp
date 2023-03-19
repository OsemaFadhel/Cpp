#include <iostream>

using namespace std;


// Ternary operator ? : = replacement to an if/else statement
// condition ? expression1 : expression2;  <-- example


int main() {

    //int grade = 60;
    //grade >= 60 ? cout << "you pass!" : "you fail!";
    //            ^ = if                ^ = else     <-- explanation       

    //int number = 9;
    //number % 2 == 1 ? cout << "ODD" : cout << "EVEN";

    bool hungry = true;
    //hungry ? cout << "You are hungry!" : cout << "You are full";
    cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}