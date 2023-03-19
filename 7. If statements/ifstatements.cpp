#include <iostream>

using namespace std;


//if statements = do something if a condition is true.  in order    if 
//                if not, then don't do it.                         else if 
//                                                                  else

int main() {

    int age;                              //always remember that goes in order. checks first if it isn't true goes to the second and continue ...
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 100) {
        cout << "you're too old:";
    }
    else if(age >= 18) {
        cout << "You can drink!";
    }
    else if(age < 0) {
        cout << "Insert a real age! ";
    }
    else {
        cout << "You're too young!";
    }
    
    return 0;
}