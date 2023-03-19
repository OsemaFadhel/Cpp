#include <iostream>

using namespace std;

// && = check if two conditions are true 
// || = check if at least one of two conditions is true 
// !  = reverses the logical state of its operand 


int main() {

    int temp;
    
    cout << "Enter the temperature: ";
    cin >> temp;

    // &&                                                // ||
    
    if(temp > 0 && temp < 30){                           // if(temp <= 0 || temp >= 30){                
        cout << "The temperature is good!" << endl;      //     cout << "The temperature is bad!";      
    }                                                    // } 
    else{                                                // else{  
        cout << "The temperature is bad!" << endl;       //     cout << "The temperature is good!";  
    }                                                    // }
    
    
    // !

    bool sunny = true;

    if(!sunny){
        cout << "It is cloudy outside!";
    }
    else{
        cout << "It is sunny outside!";
    }
    return 0;
}