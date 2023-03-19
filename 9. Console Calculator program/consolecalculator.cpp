#include <iostream>

using namespace std;


//Calculator program.

int main() {
    
    char op;
    double num1;
    double num2;
    double result;

    cout << "********** CALCULATOR **********" << endl;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter either (+ - * /): ";
    cin >> op;

    cout << "Enter number 2: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Please insert a valid operator!" << endl;

    }


    cout << "********************************" << endl;
    
    return 0;
}