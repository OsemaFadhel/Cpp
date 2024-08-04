#include <iostream>

using namespace std;

//switch = alternative to using many "else if" statements
//         compare one value against matching cases

int main() {

    int month;
    cout << "Enter the month (1-12): ";                     //other example: char grade;
    cin >> month;                                           //               cout << ...
                                                            //               cin >> grade;
    switch(month){
        case 1:
            cout << "It is January";
            break;
        case 2: 
            cout << "It is February";
            break;
        case 3:
            cout << "It is March";
            break;
        //and continue ...    
        default:
            cout << "Please enter numbers (1-12)!";
            
    }

    return 0;
}